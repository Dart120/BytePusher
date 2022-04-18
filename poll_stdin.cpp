#include<iostream>
#include <SDL.h>
#include "poll_stdin.h"
#include "print.hh"
#include "memory.h"
// #include "print.cpp"
void poll_stdin(bool* quit){
    SDL_Event e;
    // print<int>(*quit);
    
    while(SDL_PollEvent(&e)){
  switch(e.type){
    case SDL_KEYDOWN:
      if(e.key.keysym.sym==SDLK_0){
                print("keydown");
                pointer_memory_flip(0,8);
            }
            if(e.key.keysym.sym==SDLK_1){
                pointer_memory_flip(0,9);
            }
            if(e.key.keysym.sym==SDLK_2){
                pointer_memory_flip(0,10);
            }
            if(e.key.keysym.sym==SDLK_3){
                pointer_memory_flip(0,11);
            }
            if(e.key.keysym.sym==SDLK_4){
                pointer_memory_flip(0,12);
            }
            if(e.key.keysym.sym==SDLK_5){
                pointer_memory_flip(0,13);
            }
            if(e.key.keysym.sym==SDLK_6){
                pointer_memory_flip(0,14);
            }
            if(e.key.keysym.sym==SDLK_7){
                pointer_memory_flip(0,15);
            }
            if(e.key.keysym.sym==SDLK_8){
                pointer_memory_flip(0,0);
            }
            if(e.key.keysym.sym==SDLK_9){
                pointer_memory_flip(0,1);
            }
            if(e.key.keysym.sym==SDLK_a){
                pointer_memory_flip(0,2);
            }
            if(e.key.keysym.sym==SDLK_b){
                pointer_memory_flip(0,3);
            }
            if(e.key.keysym.sym==SDLK_c){
                pointer_memory_flip(0,4);
            }
            if(e.key.keysym.sym==SDLK_d){
                pointer_memory_flip(0,5);
            }
            if(e.key.keysym.sym==SDLK_e){
                pointer_memory_flip(0,6);
            }
            if(e.key.keysym.sym==SDLK_f){
                pointer_memory_flip(0,7);
            }
      break;
      case SDL_KEYUP:
      if(e.key.keysym.sym==SDLK_0){
                print("keyup");
                pointer_memory_flip(0,8);
            }
            if(e.key.keysym.sym==SDLK_1){
                pointer_memory_flip(0,9);
            }
            if(e.key.keysym.sym==SDLK_2){
                pointer_memory_flip(0,10);
            }
            if(e.key.keysym.sym==SDLK_3){
                pointer_memory_flip(0,11);
            }
            if(e.key.keysym.sym==SDLK_4){
                pointer_memory_flip(0,12);
            }
            if(e.key.keysym.sym==SDLK_5){
                pointer_memory_flip(0,13);
            }
            if(e.key.keysym.sym==SDLK_6){
                pointer_memory_flip(0,14);
            }
            if(e.key.keysym.sym==SDLK_7){
                pointer_memory_flip(0,15);
            }
            if(e.key.keysym.sym==SDLK_8){
                pointer_memory_flip(0,0);
            }
            if(e.key.keysym.sym==SDLK_9){
                pointer_memory_flip(0,1);
            }
            if(e.key.keysym.sym==SDLK_a){
                pointer_memory_flip(0,2);
            }
            if(e.key.keysym.sym==SDLK_b){
                pointer_memory_flip(0,3);
            }
            if(e.key.keysym.sym==SDLK_c){
                pointer_memory_flip(0,4);
            }
            if(e.key.keysym.sym==SDLK_d){
                pointer_memory_flip(0,5);
            }
            if(e.key.keysym.sym==SDLK_e){
                pointer_memory_flip(0,6);
            }
            if(e.key.keysym.sym==SDLK_f){
                pointer_memory_flip(0,7);
            }
      break;

  }
  if( e.type == SDL_QUIT )
                    {
                        *quit = true;
                    }
}

















        // // print(SDL_PollEvent(&e));
        // while (SDL_PollEvent(&e) != 0) {
        //     // print("event happened");

            
        //     if(e.type == SDL_KEYDOWN){
        //         // std::cout << "The key you pressed was " << SDL_GetKeyName(e.key.keysym.sym) <<std::endl;
        //     const Uint8 *state = SDL_GetKeyboardState(NULL);
        //     // print((int) state[SDL_SCANCODE_0]);
        //     if(state[SDL_SCANCODE_0]){
        //         print("keydown");
        //         pointer_memory_flip(0,8);
        //     }
        //     if(state[SDL_SCANCODE_1]){
        //         pointer_memory_flip(0,9);
        //     }
        //     if(state[SDL_SCANCODE_2]){
        //         pointer_memory_flip(0,10);
        //     }
        //     if(state[SDL_SCANCODE_3]){
        //         pointer_memory_flip(0,11);
        //     }
        //     if(state[SDL_SCANCODE_4]){
        //         pointer_memory_flip(0,12);
        //     }
        //     if(state[SDL_SCANCODE_5]){
        //         pointer_memory_flip(0,13);
        //     }
        //     if(state[SDL_SCANCODE_6]){
        //         pointer_memory_flip(0,14);
        //     }
        //     if(state[SDL_SCANCODE_7]){
        //         pointer_memory_flip(0,15);
        //     }
        //     if(state[SDL_SCANCODE_8]){
        //         pointer_memory_flip(0,0);
        //     }
        //     if(state[SDL_SCANCODE_9]){
        //         pointer_memory_flip(0,1);
        //     }
        //     if(state[SDL_SCANCODE_A]){
        //         pointer_memory_flip(0,2);
        //     }
        //     if(state[SDL_SCANCODE_B]){
        //         pointer_memory_flip(0,3);
        //     }
        //     if(state[SDL_SCANCODE_C]){
        //         pointer_memory_flip(0,4);
        //     }
        //     if(state[SDL_SCANCODE_D]){
        //         pointer_memory_flip(0,5);
        //     }
        //     if(state[SDL_SCANCODE_E]){
        //         pointer_memory_flip(0,6);
        //     }
        //     if(state[SDL_SCANCODE_F]){
        //         pointer_memory_flip(0,7);
        //     }
        //     }
        //     if(e.type == SDL_KEYUP){
        //         // std::cout << "The key you pressed was " << SDL_GetKeyName(e.key.keysym.sym) <<std::endl;
        //     const Uint8 *state = SDL_GetKeyboardState(NULL);
        //     // print((int) state[SDL_SCANCODE_0]);
        //     if(!state[SDL_SCANCODE_0]){
        //         print("keyup");
        //         pointer_memory_flip(0,8);
        //     }
        //     if(!state[SDL_SCANCODE_1]){
        //         pointer_memory_flip(0,9);
        //     }
        //     if(!state[SDL_SCANCODE_2]){
        //         pointer_memory_flip(0,10);
        //     }
        //     if(!state[SDL_SCANCODE_3]){
        //         pointer_memory_flip(0,11);
        //     }
        //     if(!state[SDL_SCANCODE_4]){
        //         pointer_memory_flip(0,12);
        //     }
        //     if(!state[SDL_SCANCODE_5]){
        //         pointer_memory_flip(0,13);
        //     }
        //     if(!state[SDL_SCANCODE_6]){
        //         pointer_memory_flip(0,14);
        //     }
        //     if(!state[SDL_SCANCODE_7]){
        //         pointer_memory_flip(0,15);
        //     }
        //     if(!state[SDL_SCANCODE_8]){
        //         pointer_memory_flip(0,0);
        //     }
        //     if(!state[SDL_SCANCODE_9]){
        //         pointer_memory_flip(0,1);
        //     }
        //     if(!state[SDL_SCANCODE_A]){
        //         pointer_memory_flip(0,2);
        //     }
        //     if(!state[SDL_SCANCODE_B]){
        //         pointer_memory_flip(0,3);
        //     }
        //     if(!state[SDL_SCANCODE_C]){
        //         pointer_memory_flip(0,4);
        //     }
        //     if(!state[SDL_SCANCODE_D]){
        //         pointer_memory_flip(0,5);
        //     }
        //     if(!state[SDL_SCANCODE_E]){
        //         pointer_memory_flip(0,6);
        //     }
        //     if(!state[SDL_SCANCODE_F]){
        //         pointer_memory_flip(0,7);
        //     }
        //     }
          
            
                
        }
    
