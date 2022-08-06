#include "stdio.h"
#include "stdlib.h"
#include <string.h>


// from https://github.com/dmatlack/chip8
// repo is a great resource for C based Chip-8
#define MAX_GAME_SIZE (0x1000 - 0x200)
#define MEM_SIZE 4096


int main()
{
    u_int8_t  memory[MEM_SIZE];
    
    char* romFile = "Roms/1-ibm-logo.ch8";
    FILE* filePtr;

    // used in init function
    memset(memory, 0, sizeof(u_int8_t)  * MEM_SIZE);

    filePtr = fopen(romFile, "rb");
    
    if (NULL == filePtr) {
        fprintf(stderr, "Unable to open game: %s\n", romFile);
        exit(42);
    }

    fread(&memory[0x200], 1, MAX_GAME_SIZE, filePtr);

    for (int i = 512; i < (512 + 132); i++) {
        printf("i: %d, hex: %02x\n", i, memory[i]);
    }

    fclose(filePtr);    
    

    return 0;
}