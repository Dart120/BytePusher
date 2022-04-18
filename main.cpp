#include<iostream>
#include <SDL.h>
#include "main.h"
#include "print.hh"
#include "outer_loop.h"
#include "memory.h"
#include "screen_update.h"
#include "audio.h"
#define MEM_SIZE 16777216

int main()
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    // int* w = NULL,*h = NULL;
    SDL_Window * window = SDL_CreateWindow("SDL2 Pixel Drawing",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_SIZE, SCREEN_SIZE, 0);

	if (SDL_SetHint(SDL_HINT_VIDEO_HIGHDPI_DISABLED, "1")){
        print("hint_worked");
    }
SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
SDL_Texture * texture = SDL_CreateTexture(renderer,
    SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STATIC, SCREEN_SIZE, SCREEN_SIZE);
    
    read_into_memory();
    // print(read_memory(0,1));
    // print(read_memory(16,1));
    // print(read_memory(2,1));
    // print(read_memory(3,1));
    // print(read_memory(4,1));
    // print(read_memory(5,1));
    // print(read_memory(6,1));
    // print(read_memory(7,1));
    // exit(0);
    // print_mem(mem);
    // print(screen == nullptr);
//     SDL_SetWindowSize(window, SCREEN_SIZE,
//                     SCREEN_SIZE);

// exit(0);
    setupAudio();
    outer_loop(texture,window,renderer);
    return 0;
}