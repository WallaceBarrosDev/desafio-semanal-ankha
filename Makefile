CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -O2
DEBUGFLAGS = -pedantic -Wall -Wextra -std=c11 -g -O0 -ffile-prefix-map=$(PWD)=$(PWD)
TESTFLAGS = -pedantic -Wall -Wextra -std=c11 -g -O0 $(shell pkg-config --cflags cmocka)

SRC     := $(shell find src -type f -name '*.c')
TEST_SRC := $(shell find test -type f -name '*.c')

OBJ       := $(patsubst src/%.c,build/%.o,$(SRC))
DEBUG_OBJ := $(patsubst src/%.c,build-debug/%.o,$(SRC))
TEST_SRC_OBJ := $(filter-out build-test/main.o, $(patsubst src/%.c,build-test/%.o,$(SRC)))
TEST_TEST_OBJ := $(patsubst test/%.c,build-test/%.o,$(TEST_SRC))

.PHONY: all debug run run-debug run-test clean

all: build/game
debug: build-debug/game

run: build/game
	@clear
	@./build/game

run-debug: build-debug/game
	@clear
	@./build-debug/game

run-test: build-test/test
	@clear
	@./build-test/test

build/game: $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(OBJ) -o $@

build-debug/game: $(DEBUG_OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(DEBUG_OBJ) -o $@

build-test/test: $(TEST_SRC_OBJ) $(TEST_TEST_OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(TEST_SRC_OBJ) $(TEST_TEST_OBJ) -o $@ $(shell pkg-config --libs cmocka)

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

build-debug/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(DEBUGFLAGS) -c $< -o $@

build-test/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(TESTFLAGS) -c $< -o $@

build-test/%.o: test/%.c
	@mkdir -p $(dir $@)
	$(CC) $(TESTFLAGS) -c $< -o $@

clean:
	rm -rf build build-debug build-test
