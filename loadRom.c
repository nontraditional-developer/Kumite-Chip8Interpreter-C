#include "loadRom.h"



#define MAX_GAME_SIZE (0x1000 - 0x200)


void load_rom(uint8_t* memory) 
{
    printf("in here\n");
    char* romFile = "1-ibm-logo.ch8";
    FILE* filePtr;

    filePtr = fopen(romFile, "rb");
    
    if (NULL == filePtr) {
        fprintf(stderr, "Unable to open game: %s\n", romFile);
        exit(42);
    }

    fread(&memory[0x200], 1, MAX_GAME_SIZE, filePtr);
    fclose(filePtr);    

}
