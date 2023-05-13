#pragma once

#include "Game.h"
#include "ECS.h"
#include "Components.h"
#include <set>
#include <algorithm>

class Keyboard : public Component
{
private:
	std::set<SDL_Keycode> keys;
	std::set<SDL_Keycode> filter;
public:

	Keyboard();

	Keyboard(std::set<SDL_Keycode> Filter);

	void init() override;

	void update() override;

	void keyListen();

	std::set<SDL_Keycode> getKeys();

	bool key(SDL_Keycode);
};