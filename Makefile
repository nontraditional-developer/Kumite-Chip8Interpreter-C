CC=gcc
CFLAGS=-I.
DEPS = init.h loadRom.h
OBJ = chip8.o init.o loadRom.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

chip8: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)