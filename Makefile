
.PHONY: all clean

all: chess

chess: main.o chessboard.o chessgame.o print_chess.o
	g++ build/main.o build/chessboard.o build/print_chess.o build/chessgame.o -o chess

main.o:
	g++ -Wall -Werror -c src/main.cpp -o build/main.o 

chessboard.o:
	g++ -Wall -Werror -c src/chessboard.cpp -o build/chessboard.o 

print_chess.o:
	g++ -Wall -Werror -c src/print_chess.cpp -o build/print_chess.o 

chessgame.o:
	g++ -Wall -Werror -c src/chessgame.cpp -o build/chessgame.o 


clean:
	rm -rf build/*.o
	rm -rf *.o