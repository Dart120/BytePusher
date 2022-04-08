#include <chrono>
#include<iostream>
#include "outer_loop.h"
#include "poll_stdin.h"
#include "memory.h"
#include "inner_loop.h"
void outer_loop(){
    auto start = std::chrono::high_resolution_clock::now();
    bool quit = false;
    char* PC;
    while (!quit){
        
        auto elapsed = std::chrono::high_resolution_clock::now() - start;

        long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        elapsed).count();
        if (microseconds % 1000000 == 0){
            // print<char*>("tick");
            // break;
            poll_stdin(&quit);
            PC = read_memory(2,3);
            inner_loop(PC);

        }
    }
    
}