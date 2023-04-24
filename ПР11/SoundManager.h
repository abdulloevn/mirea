#pragma once
#include <SDL_mixer.h>
#include <SDL.h>
#include <string>

class SoundManager
{
private:
public:

	static Mix_Chunk* loadSound(const char* path);
	static void play(Mix_Chunk* sound);
};