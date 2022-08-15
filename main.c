#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "chip8.h"
#include "loadRom.h"


// from https://github.com/dmatlack/chip8
// repo is a great resource for C based Chip-8

/* TODO
   IMPLEMENT THE FOLLOWING INSTRUCTIONS
   - OOEO   CLEAR SCREEN
   - 1NNN   JUMP
   - 6XNN   SET REGISTER VX
   - 7XNN   ADD VALUE TO REGISTER VX
   - ANNN   SET INDEX REGISTER I
   - DXYN   DISPLAY/DRAW
*/

// #define MEM_SIZE 4096



int main()
{
    //uint8_t memory[MEM_SIZE];
    struct Chip8 chip8;
    

    //initialize(memory);
    initialize(chip8.memory);
    //load_rom(memory);
    load_rom(chip8.memory);

    for (int i = 0; i < MEM_SIZE; i++) {
        printf("i: %d, hex: %02x\n", i, chip8.memory[i]);
    }
    
        
    
    // TO ONLY PRINT GAME
    // for (int i = 512; i < (512 + 132); i++) {
    //     printf("i: %d, hex: %02x\n", i, memory[i]);
    // }

    
    

    return 0;
}