#pragma once
#include "Game.h"

#include <fstream>
#include <sstream>
#include <iomanip>

#include <string>

class Game;
class TextureManager;

class Map
{
public:
	Map(Game* GAME);
	~Map();

	void LoadMap(std::string file_path);
	void DrawMap();
private:
	SDL_Rect src, dest;
	int height, width;

	int*** mapp;
	TextureManager* texmgr;
	Game* game;

};