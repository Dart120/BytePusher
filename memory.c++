#include<iostream>
#include <sys/stat.h>
#include<fstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <chrono>
#include <SDL.h>
using namespace std;
#define MEM_SIZE 16777216

template <typename T>

void print(T array){
    std::cout << array << std::endl;
}
void poll_stdin(bool* quit){
    SDL_Event e;
    // print<int>(*quit);
    

        // print(SDL_PollEvent(&e));
        while (SDL_PollEvent(&e) != 0) {
            print("event happened");
            if(e.type == SDL_KEYDOWN){
                cout << "The key you pressed was " << SDL_GetKeyName(e.key.keysym.sym) <<endl;
            }
            if( e.type == SDL_QUIT )
                    {
                        *quit = true;
                    }
                
        }
    
}
void outer_loop(){
    auto start = std::chrono::high_resolution_clock::now();
    bool quit = false;
    while (!quit){
        
        auto elapsed = std::chrono::high_resolution_clock::now() - start;

        long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
        elapsed).count();
        if (microseconds % 1000000 == 0){
            // print<char*>("tick");
            // break;
            poll_stdin(&quit);
        }
    }
    
}
void print_mem(char* array){
    for (int i = 0; i < MEM_SIZE; i++){
        cout<< (int)array[i]<<" ";
    }
}
void is_null_term(char* arr){
    bool nullFound = false;
    int counter = 0;
    for (int i = 0; i < MEM_SIZE; i++){
        
        if(arr[i] == '\0'){
            print<int>(i);
            break;
        }
    }

}
void read_into_memory(char* memory){
    // struct stat results;
    std::string input;
    print<char*>("Input File: ");
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
int main()
{
    //Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//The window we'll be rendering to
    SDL_Window* window = NULL;
    
    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    }
    else
    {
        //Create window
        window = SDL_CreateWindow( "BytePusher", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        //Get window surface
            screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
            //Update the surface
            SDL_UpdateWindowSurface( window );

            //Wait two seconds
            // SDL_Delay( 2000 );
        if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }
    }
    char* mem = (char* ) malloc(sizeof(char) * MEM_SIZE);
    mem[2] = 'n';
    
    read_into_memory(mem);
    // print_mem(mem);
    outer_loop();
    return 0;
}





    
    