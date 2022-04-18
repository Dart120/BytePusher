#include <chrono>
#include<iostream>
#include <SDL.h>
#include "outer_loop.h"
#include "poll_stdin.h"
#include "memory.h"
#include "print.hh"
#include "screen_update.h"
#include <cstdlib>
#include <ctime>
void screen_update(SDL_Texture* texture, int starts,SDL_Window* window,SDL_Renderer* renderer,Uint32* pixels){
    // print((int)screen->format->BitsPerPixel);
    
    
    // screen->pixels;
    // print("here");
    // if( SDL_MUSTLOCK( screen ) )
    // {
    //     //Lock the surface
    //     print("locked");
    //     SDL_LockSurface( screen );
    // }
    int w, h, access;
unsigned int format;
    // SDL_QueryTexture(texture, &format, NULL,NULL,NULL);
    // print(SDL_GetPixelFormatName(format));
    // exit(0);
    unsigned char* newScreen = (unsigned char*) point_to_screen(starts);
    // print((int)newScreen[50000]);
    // exit(0);
    // print("start");
    
    for (int i = 0; i<SCREEN_SIZE * SCREEN_SIZE; i++){
        // print(i);
        // pixels[i] = 500; 
        if ((int) newScreen[i]> 215){
           pixels[i] = 0; 

           
        //    exit(0);
        }else{
            unsigned char blue = newScreen[i] % 6;
    unsigned char green = ((newScreen[i]) /6)% 6;
    unsigned char red = ((newScreen[i]) / 36)% 6;
    // print((int)red);
    // print((int)green);
    // print((int)blue);
    Uint32 colour = 255 << 24|(red * 0x33) << 16 | (green * 0x33) << 8 | (blue * 0x33) ;
    // print(colour);
    // print((int)newScreen[i]);
    // print((int) newScreen[i]);
            pixels[i] = colour;
        }
        
        
    }
    
    // Uint8* pixels = (Uint8 *)screen->pixels;
    // for (int i = 0; i < 256 * 256; i++){
    //     pixels[i] = (Uint8) 200;
    // }
    




    SDL_RenderClear(renderer);
SDL_RenderCopy(renderer, texture, NULL, NULL);
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