#include "SoundManager.h"

Mix_Chunk* SoundManager::loadSound(const char* path)
{
	Mix_Chunk* sound = NULL;
	sound = Mix_LoadWAV(path);
	if (sound == NULL)
	{
		fprintf(stderr, "Unable to load WAV file: %s\n", Mix_GetError());
		return NULL;
	}
	return sound;
}

void SoundManager::play(Mix_Chunk* sound)
{
	int channel;
	channel = Mix_PlayChannel(-1, sound, 0);
	if (channel == -1)
	{
		fprintf(stderr, "Unable to play WAV file: %s\n", Mix_GetError());
	}
}