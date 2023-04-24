#include "Map.h"

Map::Map(Game* GAME)
{
	game = GAME;
	texmgr = new TextureManager("tile_assets");

	const int X = 32, Y = 18, Z=5;
	int* mapp[X][Y][Z] = { 0 };
}

Map::~Map()
{

}

void Map::LoadMap(std::string file_path)
{
	std::string path = Utils::local_path(file_path);
	std::string line;
	std::ifstream file(path);

	std::getline(file, line, 'x');
	width = atoi(line.c_str());
	std::getline(file, line, ';');
	height = atoi(line.c_str());

	float resMult = game->scr_res_mult();

	src.x = src.y = 0;
	src.w = dest.w = (float)((60 * (32 / width)) * resMult);
	src.h = dest.h = (float)((60 * (18 / height)) * resMult);

	dest.x = dest.y = 0;

	if (!file.good()) {
		std::cout << path << " - failed to load map" << std::endl;
		return;
	}

	mapp = NULL;
	mapp = new int** [32]();
	while (true)
	{
		if (!std::getline(file, line, ';')) break;
		int x = atoi(line.c_str());
		std::getline(file, line, ';');
		int y = atoi(line.c_str());

		for (int i = 0; i < 5; i++)
		{
			std::getline(file, line, ';');

			if (x > width || y > height) continue;

			if (!mapp[x]) mapp[x] = new int* [18]();
			if (!mapp[x][y]) mapp[x][y] = new int[5]();
			mapp[x][y][i] = atoi(line.c_str());

		}
	}
	std::cout << file_path << " loaded" << std::endl;
}

void Map::DrawMap()
{
	int type = 0;

	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
		{
			type = mapp[x][y][0];

			float resMult = game->scr_res_mult();

			dest.x = (float)((60 * (32 / width)) * resMult)*x;
			dest.y = (float)((60 * (18 / height)) * resMult)*y;

			TextureManager::Draw(texmgr->asset(type, mapp[x][y][1]), src, dest);
		}
	}
}