#include "init.h"


#define MEM_SIZE 4096



void initialize(uint8_t* memory) 
{
    // used in init function
    memset(memory, 0, sizeof(uint8_t)  * MEM_SIZE);
}