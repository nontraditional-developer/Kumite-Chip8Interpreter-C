#include "stdio.h"
#include "stdlib.h"

// Review: https://stackoverflow.com/questions/48367022/c-iterate-through-char-array-with-a-pointer
// to iterate thru char* correctly, hopefully 

int main()
{
    printf("hello\n");
    char* romFile = "Roms/1-ibm-logo.ch8";
    FILE* filePtr;
    char* romBuffer;    
    unsigned int fileLen;

    filePtr = fopen(romFile, "rb");
    if (!filePtr) {
        fprintf(stderr, "Unable to open file");
    }
    else {
        //Get file length
        fseek(filePtr, 0, SEEK_END);
        fileLen=ftell(filePtr);
        fseek(filePtr, 0, SEEK_SET);
    }

    //Allocate memory
	romBuffer=(char *)malloc(fileLen+1);
	if (!romBuffer)
	{
		fprintf(stderr, "Memory error!");
        fclose(filePtr);
	}
    else {
        //Read file contents into buffer
        fread(romBuffer, fileLen, 1, filePtr);
        fclose(filePtr);
        printf("fileLen: %d\n", fileLen);
    }

    // DO WHATEVER W/ BUFFER
    for (int i = 0; i < fileLen; i++) {
        printf("i: %d, hex: %x\n", i, romBuffer[i]);
    }

    // free allocated memory
    free(romBuffer);


    
    

    return 0;
}