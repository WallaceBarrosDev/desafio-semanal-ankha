CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -O2

SRC := $(shell find src -type f -name '*.c')
OBJ := $(patsubst src/%.c,build/%.o,$(SRC))

.PHONY: all run clean

all: build/game

run: build/game
	@clear
	@./build/game

build/game: $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(OBJ) -o $@

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build

