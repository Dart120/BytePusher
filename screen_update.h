#ifndef SCREEN_UPDATE_H
#define SCREEN_UPDATE_H
#define SCREEN_SIZE 256
#include <SDL.h>
void screen_update(SDL_Texture* texture, int starts,SDL_Window* window,SDL_Renderer* renderer,Uint32 * pixels);
#endif