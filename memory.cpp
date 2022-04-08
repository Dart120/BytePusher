#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "print.hh"
#include "memory.h"


using namespace std;
// #define MEM_SIZE 4
#define MEM_SIZE 16777216
char* memory = (char* ) malloc(sizeof(char) * MEM_SIZE);

void read_into_memory(){
    // struct stat results;
    std::string input;
    print("Input File: ");
    cin >> input;
    char* temp = (char* ) malloc(sizeof(char) * MEM_SIZE);
    


    // std::ifstream in(input);
    // std::string contents((std::istreambuf_iterator<char>(in)), 
    // std::istreambuf_iterator<char>());
    // contents.c_str();
    std::ifstream infile;
    infile.open("nyan.bp", std::ios::binary);
    infile.seekg(0, std::ios::end);
    size_t file_size_in_byte = infile.tellg();
    std::vector<char> data; // used to store text data
    data.resize(file_size_in_byte);
    print<size_t>(file_size_in_byte);
    infile.seekg(0, std::ios::beg);
    infile.read(memory, file_size_in_byte);
   
    // strncpy(memory,temp,3);
   
    
    // memory[file_size_in_byte+1] = 'n';
    // print<char>(memory);
    // print_mem(memory);
    // print<int>(strlen(memory));   
}

void pointer_memory_flip(int position,int bit_to_change){
    char* pointer = memory + position;
    int added_pointer = bit_to_change/8;
    char bit = bit_to_change % 8;
    char* actual_pointer = pointer + added_pointer;
    *actual_pointer |= 1UL << bit;
}
char* read_memory(int position, int bytes){
    int acc = 0;
    for (int i = 0;i < bytes;i++){
        int shift = (bytes - 1 - i) * 8;
        // print(shift);
        // print((int)memory[position + i]);
        acc += (unsigned char) memory[position + i] << shift;
    }
    return memory + acc;
}
// int main(){
//     *memory = 0;
//     memory[1] = 1;
//     memory[2] = 2;
//     memory[3] = 3;
//     print((int)memory[0]);
//     print(read_memory(1,2));

// }
// #define MEM_SIZE 16777216






    
    