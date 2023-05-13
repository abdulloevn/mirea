#include "Keyboard.h"

void Keyboard::init()
{ }

void Keyboard::update()
{
	keyListen();
}

Keyboard::Keyboard()
{
	filter = {};
}

Keyboard::Keyboard(std::set<SDL_Keycode> Filter)
{
	filter = Filter;
}

void Keyboard::keyListen()
{
	if (Game::event.type == SDL_KEYDOWN) {
		keys.insert(Game::event.key.keysym.sym);
	}

	if (Game::event.type == SDL_KEYUP) {
		keys.erase(Game::event.key.keysym.sym);
	}
	if (filter.size()) {
		std::set<SDL_Keycode> temp;
		std::set_intersection(keys.begin(), keys.end(), filter.begin(), filter.end(), std::inserter(temp, temp.begin()));
		keys = temp;
	}
}

std::set<SDL_Keycode> Keyboard::getKeys()
{
	return keys;
}

bool Keyboard::key(SDL_Keycode k)
{
	return keys.find(k) != keys.end();
}