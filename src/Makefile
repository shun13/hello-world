
EXE = hello-world
OBJ = main.o
CC  = gcc
CFLAGS = -O0

.SUFFIXES: .c .o

.PHONY: all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $(EXE) $^

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(EXE) $(OBJ)
