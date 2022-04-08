#ifndef POLL_STDIN
#define POLL_STDIN
void read_into_memory();
void pointer_memory_flip(int position,int bit_to_change);
char* read_memory(int position, int bytes);
#endif