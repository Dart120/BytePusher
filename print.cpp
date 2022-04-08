#ifndef PRINT_CPP
#define PRINT_CPP
#include<iostream>
#include "print.hh"

#define MEM_SIZE 16777216



void print_mem(char* array){
    for (int i = 0; i < MEM_SIZE; i++){
        std::cout<< (int)array[i]<<" ";
    }
}

#endif