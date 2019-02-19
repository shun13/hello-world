
EXE = hello-world
CC  = gcc
CFLAGS = -O0
SRCDIR = ../src
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SOURCES:.c=.o)

.SUFFIXES: .c .o

.PHONY: all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $@ $^

%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(EXE) $(OBJ)
