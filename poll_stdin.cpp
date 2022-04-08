#include<iostream>
#include <SDL.h>
#include "poll_stdin.h"
#include "print.hh"
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
                
        }
    
}