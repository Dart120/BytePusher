#ifndef MEMORY_H
#define MEMORY_H
void read_into_memory();
void pointer_memory_flip(int position,int bit_to_change);
int read_memory(int position, int bytes);
int bytepush(int source, int dest);
char* point_to_screen(int start);
// char* read_memory_point(int position, int bytes);
#endif