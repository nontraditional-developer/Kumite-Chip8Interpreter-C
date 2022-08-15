#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "init.h"
#include "loadRom.h"


#define MEM_SIZE 4096


struct Chip8
{
    // memory
    uint8_t memory[MEM_SIZE];

    // program counter
    uint8_t pc;

    // index register I
    uint16_t I;

    // registers
    uint16_t V[16];
};

