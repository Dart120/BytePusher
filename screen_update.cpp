#include <chrono>
#include<iostream>
#include <SDL.h>
#include "outer_loop.h"
#include "poll_stdin.h"
#include "memory.h"
#include "print.hh"
#include "screen_update.h"
void screen_update(SDL_Surface* screen, int starts,SDL_Window* window,SDL_Renderer* renderer){
    // print((int)screen->format->BitsPerPixel);
    // screen->pixels;
    print("here");
    // if( SDL_MUSTLOCK( screen ) )
    // {
    //     //Lock the surface
    //     print("locked");
    //     SDL_LockSurface( screen );
    // }
    char* newScreen = point_to_screen(starts);
    // Uint8* pixels = (Uint8 *)screen->pixels;
    // for (int i = 0; i < 256 * 256; i++){
    //     pixels[i] = (Uint8) 200;
    // }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    for (int i = 0; i < 256; ++i)
        SDL_RenderDrawPoint(renderer, i, i);
    SDL_RenderPresent(renderer);



    //  if( SDL_MUSTLOCK( screen ) )
    // {
    //     SDL_UnlockSurface( screen );
    // }
    // SDL_UpdateWindowSurface( window );
    
}
// void put_pixel32( SDL_Surface *surface, int x, int y, Uint32 pixel )
// {
//     //Convert the pixels to 32 bit
    
    
//     //Set the pixel
//     pixels[ ( y * surface->w ) + x ] = pixel;
// }