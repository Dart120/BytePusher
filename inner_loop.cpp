#include <chrono>
#define FMT_HEADER_ONLY
#include <fmt/core.h> 
#include<iostream>
#include "inner_loop.h"
#include "memory.h"
#include "print.hh"
void inner_loop(int PC){
    // print("inner start");
    int i = 65536;
    // PC is value of address
    do{

        int A = read_memory(PC,3);
        int B = read_memory(PC + 3,3);
        if (bytepush(A,B)){
        }
        int C = read_memory(PC + 6, 3);
        PC = C;
        // print(fmt::format("A: {},B: {},C: {}.", A,B,C));
    }while(i--);
    // print("inner done");
}