.PHONY: all clean

way1 = src/main.cpp
way2 = src/chessboard.cpp
way3 = src/chessgame.cpp
way4 = src/print_chess.cpp
obj1 = build/main.o
obj2 = build/chessboard.o
obj3 = build/chessgame.o
obj4 = build/print_chess.o

all: bin/chessviz

bin/chessviz: $(obj1) $(obj2) $(obj3) $(obj4)
	g++ $^ -o $@

$(obj1): $(way1)
	g++ -c $^ -Werror -o $@

$(obj2): $(way2)
	g++ -c $^ -Werror -o $@

$(obj3): $(way3)
	g++ -c $^ -Werror -o $@

$(obj4): $(way4)
	g++ -c $^ -Werror -o $@

clean:
	rm -rf build/*.o
	rm -rf *.o
