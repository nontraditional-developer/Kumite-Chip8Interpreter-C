#include "stdio.h"


int main()
{
    printf("hello\n");
    unsigned char buffer[10];
    FILE* filePtr;

    filePtr = fopen("Roms/1-ibm-logo.ch8", "rb");
    fread(buffer, sizeof(buffer), 1, filePtr);

    for (int i = 0; i < 10; i++) {
        printf("i: %d, hex: %x\n", i, buffer[i]);
    }
    

    return 0;
}