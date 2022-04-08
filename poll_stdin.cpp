#include<iostream>
#include <SDL.h>
#include "poll_stdin.h"
#include "print.hh"
#include "memory.h"
// #include "print.cpp"
void poll_stdin(bool* quit){
    SDL_Event e;
    // print<int>(*quit);
    

        // print(SDL_PollEvent(&e));
        while (SDL_PollEvent(&e) != 0) {
            print("event happened");
            if(e.type == SDL_KEYDOWN){
                std::cout << "The key you pressed was " << SDL_GetKeyName(e.key.keysym.sym) <<std::endl;
            }
            if( e.type == SDL_QUIT )
                    {
                        *quit = true;
                    }
            const Uint8 *state = SDL_GetKeyboardState(NULL);
            if(state[SDL_SCANCODE_0]){
                pointer_memory_flip(0,13);
            }
            if(state[SDL_SCANCODE_1]){
                pointer_memory_flip(0,0);
            }
            if(state[SDL_SCANCODE_2]){
                pointer_memory_flip(0,1);
            }
            if(state[SDL_SCANCODE_3]){
                pointer_memory_flip(0,2);
            }
            if(state[SDL_SCANCODE_4]){
                pointer_memory_flip(0,4);
            }
            if(state[SDL_SCANCODE_5]){
                pointer_memory_flip(0,5);
            }
            if(state[SDL_SCANCODE_6]){
                pointer_memory_flip(0,6);
            }
            if(state[SDL_SCANCODE_7]){
                pointer_memory_flip(0,8);
            }
            if(state[SDL_SCANCODE_8]){
                pointer_memory_flip(0,9);
            }
            if(state[SDL_SCANCODE_9]){
                pointer_memory_flip(0,10);
            }
            if(state[SDL_SCANCODE_A]){
                pointer_memory_flip(0,12);
            }
            if(state[SDL_SCANCODE_B]){
                pointer_memory_flip(0,14);
            }
            if(state[SDL_SCANCODE_C]){
                pointer_memory_flip(0,3);
            }
            if(state[SDL_SCANCODE_D]){
                pointer_memory_flip(0,7);
            }
            if(state[SDL_SCANCODE_E]){
                pointer_memory_flip(0,11);
            }
            if(state[SDL_SCANCODE_F]){
                pointer_memory_flip(0,15);
            }
                
        }
    
}