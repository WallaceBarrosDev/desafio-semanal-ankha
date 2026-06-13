CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -O2 -DCSV_PATH=\"database/clients.csv\"
DEBUGFLAGS = -pedantic -Wall -Wextra -std=c11 -g -O0 -ffile-prefix-map=$(PWD)=$(PWD) -DCSV_PATH=\"database/clients.csv\"
TESTFLAGS = -pedantic -Wall -Wextra -std=c11 -g -O0 $(shell pkg-config --cflags cmocka) -DCSV_PATH=\"test_data/clients.csv\"

SRC           := $(shell find src -type f -name '*.c')
TEST_UNIT_SRC := $(shell find test/unit -type f -name '*.c')
TEST_INT_SRC  := $(shell find test/integration -type f -name '*.c')

OBJ              := $(patsubst src/%.c,build/%.o,$(SRC))
DEBUG_OBJ        := $(patsubst src/%.c,build-debug/%.o,$(SRC))
TEST_SRC_OBJ     := $(filter-out build-test/main.o build-test/repository/%, $(patsubst src/%.c,build-test/%.o,$(SRC)))
TEST_INT_SRC_OBJ := $(filter-out build-test/main.o, $(patsubst src/%.c,build-test/%.o,$(SRC)))
TEST_UNIT_OBJ    := $(patsubst test/%.c,build-test/%.o,$(TEST_UNIT_SRC))
TEST_INT_OBJ     := $(patsubst test/%.c,build-test/%.o,$(TEST_INT_SRC))

.PHONY: all debug run run-debug run-test run-test-unit run-test-integration clean

all: build/game
debug: build-debug/game

run: build/game
	@clear
	@./build/game

run-debug: build-debug/game
	@clear
	@./build-debug/game

run-test: run-test-unit run-test-integration

run-test-unit: build-test/test_unit
	@clear
	@./build-test/test_unit

run-test-integration: build-test/test_integration
	@clear
	@./build-test/test_integration

build/game: $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(OBJ) -o $@

build-debug/game: $(DEBUG_OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(DEBUG_OBJ) -o $@

build-test/test_unit: $(TEST_SRC_OBJ) $(TEST_UNIT_OBJ) build-test/testUnit.o
	@mkdir -p $(dir $@)
	$(CC) $(TEST_SRC_OBJ) $(TEST_UNIT_OBJ) build-test/testUnit.o -o $@ $(shell pkg-config --libs cmocka)

build-test/test_integration: $(TEST_INT_SRC_OBJ) $(TEST_INT_OBJ) build-test/testIntegration.o
	@mkdir -p $(dir $@)
	$(CC) $(TEST_INT_SRC_OBJ) $(TEST_INT_OBJ) build-test/testIntegration.o -o $@ $(shell pkg-config --libs cmocka)

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
