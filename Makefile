CC = gcc

CFLAGS = -pedantic -Wall -Wextra -std=c11 -O2
DEBUGFLAGS = -pedantic -Wall -Wextra -std=c11 -g -O0 -ffile-prefix-map=$(PWD)=$(PWD)

SRC := $(shell find src -type f -name '*.c')

OBJ := $(patsubst src/%.c,build/%.o,$(SRC))
DEBUG_OBJ := $(patsubst src/%.c,build-debug/%.o,$(SRC))

.PHONY: all debug run run-debug clean

all: build/game

debug: build-debug/game

run: build/game
	@clear
	@./build/game

run-debug: build-debug/game
	@clear
	@./build-debug/game

build/game: $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(OBJ) -o $@

build-debug/game: $(DEBUG_OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(DEBUG_OBJ) -o $@

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

build-debug/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(DEBUGFLAGS) -c $< -o $@

clean:
	rm -rf build build-debug
