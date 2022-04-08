#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "print.hh"
#include "memory.h"


using namespace std;
#define MEM_SIZE 16777216


void read_into_memory(char* memory){
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






    
    