CFLAGS = -Wall -Werror -std=c99
CC = gcc
OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD = mkdir -p build/src

.PHONY: clean test

default: bin/chess.exe

test: bin/chess_test.exe
	$<

bin/chess_test.exe: build/test/main_test.o build/src/print_chess.o build/src/chessboard.o build/src/chessgame.o
	mkdir -p bin
	$(CC) $^ -o $@ $(CFLAGS)

build/test/main_test.o: test/main.c thirdparty/ctest.h src/chessgame.h
	mkdir -p build/test
	$(OBJ) -I thirdparty -I src

bin/chess.exe: build/src/main.o build/src/print_chess.o build/src/chessboard.o build/src/chessgame.o
	mkdir -p bin
	$(CC) $^ -o $@ $(CFLAGS)

build/src/main.o: src/main.c
	$(MKDIR_BUILD)
	$(OBJ)

build/src/print_chess.o: src/print_chess.c src/print_chess.h
	$(MKDIR_BUILD)
	$(OBJ)

build/src/chessboard.o: src/chessboard.c src/chessboard.h
	$(MKDIR_BUILD)
	$(OBJ)

build/src/chessgame.o: src/chessgame.c src/chessgame.h
	$(MKDIR_BUILD)
	$(OBJ)


clean:
	rm -rf build bin
