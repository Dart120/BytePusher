#include<iostream>
#include <SDL.h>
#include "main.h"
#include "print.hh"
#include "outer_loop.h"
#include "memory.h"
#define MEM_SIZE 16777216

int main()
{
    //Screen dimension constants
const int WINDOW_WIDTH = 256;
const int SCREEN_HEIGHT = 256;

//The window we'll be rendering to
    SDL_Window* window = NULL;
    
    //The surface contained by the window
   SDL_Surface* screenSurface = NULL;
    SDL_Renderer* renderer = NULL;
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }
    else
    {
        SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
           
        if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }
    }
    
    
    
    read_into_memory();
    // print_mem(mem);
    print(screenSurface == nullptr);
    outer_loop(screenSurface,window,renderer);
    return 0;
}