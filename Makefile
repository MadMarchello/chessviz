all: chess

chess: main.o chessboard.o print_chess.o
	g++ main.o chessboard.o print_chess.o -o chess

main.o:
	g++ -c src/main.cpp

chessboard.o:
	g++ -c src/chessboard.cpp

print_chess.o:
	g++ -c src/print_chess.cpp