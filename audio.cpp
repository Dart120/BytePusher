#include<iostream>
#include <SDL.h>
#include "audio.h"
#include "print.hh"
#include "outer_loop.h"
#include "memory.h"
#include "screen_update.h"
#define MEM_SIZE 16777216


void callback(void *userdata, Uint8 *stream, int len){
    
    int location = read_memory(6,2);
    // //Copy audio to stream
    // SDL_memset(stream, 20000, len); 
for (int i=0;i<len;i++) {
        stream[i] = point_to_screen(location)[i];
    }
    //Move along buffer
  
}

void playAudio(){
SDL_PauseAudio(0);
}
void setupAudio()
{
/* Prototype of our callback function */


/* Open the audio device */
SDL_AudioSpec *desired, *obtained;
SDL_AudioSpec *hardware_spec;

/* Allocate a desired SDL_AudioSpec */
desired=(SDL_AudioSpec *)malloc(sizeof(SDL_AudioSpec));

/* Allocate space for the obtained SDL_AudioSpec */
obtained=(SDL_AudioSpec *)malloc(sizeof(SDL_AudioSpec));

/* 22050Hz - FM Radio quality */
desired->freq=15360;

/* 16-bit signed audio */
desired->format=AUDIO_U8;

/* Mono */
desired->channels=0;

/* Large audio buffer reduces risk of dropouts but increases response time */
desired->samples=256;

/* Our callback function */
desired->callback=callback;

desired->userdata=NULL;

/* Open the audio device */
if ( SDL_OpenAudio(desired, obtained) < 0 ){
  fprintf(stderr, "Couldn't open audio: %s\n", SDL_GetError());
  exit(-1);
}
/* desired spec is no longer needed */
free(desired);
hardware_spec=obtained;

/* Prepare callback for playing */

/* Start playing */

}