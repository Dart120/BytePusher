#include <chrono>
#include<iostream>
#include <SDL.h>
#include "outer_loop.h"
#include "poll_stdin.h"
#include "memory.h"
#include "inner_loop.h"
#include "screen_update.h"
#include "audio.h"
#include "print.hh"
void outer_loop(SDL_Texture* texture,SDL_Window* window,SDL_Renderer* renderer){
    auto start = std::chrono::high_resolution_clock::now();
    bool quit = false;
    int PC;
    int screenStarts;
    srand(time(0));
    Uint32 * pixels = new Uint32[SCREEN_SIZE * SCREEN_SIZE];
    memset(pixels, 255, 640 * 480 * sizeof(Uint32));
   if(SDL_UpdateTexture(texture, NULL, pixels, SCREEN_SIZE * sizeof(Uint32))){
                print("Texture not updated");
                print(SDL_GetError());
                exit(1);
            }
    while (!quit){
        // print("start update texture");
        
        // print("end update texture");
        auto elapsed = std::chrono::high_resolution_clock::now() - start;

        long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        if (microseconds % 16666 == 0){
            // print<char*>("tick");
            // break;
            screen_update(texture,read_memory(5,3),window,renderer,pixels);
            
            // exit(0);
            if(SDL_UpdateTexture(texture, NULL, pixels, SCREEN_SIZE * sizeof(Uint32))){
                print("Texture not updated");
                print(SDL_GetError());
                exit(1);
            }
            
            poll_stdin(&quit);
            PC = read_memory(2,3);
            // SDL_Delay(3000);
            inner_loop(PC);
            playAudio();
            
        }
    }
    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);

    SDL_DestroyWindow(window);
    SDL_Quit();
    
}