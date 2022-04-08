#include <chrono>
#include<iostream>
#include "inner_loop.h"
#include "memory.h"
void inner_loop(int PC){
    int i = 65536;
    // PC is value of address
    do{
        int A = read_memory(PC,3);
        int B = read_memory(PC + 3,3);
        if (bytepush(A,B)){
        }
        int C = read_memory(PC + 6, 3);
    }while(i--);
    
}