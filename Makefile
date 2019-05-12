.PHONY: all clean

way1 = src/main.c
way2 = src/chessboard.c
way3 = src/chessgame.c
way4 = src/print_chess.c
obj1 = build/src/main.o
obj2 = build/src/chessboard.o
obj3 = build/src/chessgame.o
obj4 = build/src/print_chess.o
way_test = test/main_test.c
obj_test = build/test/main_test.o

all: bin/chessviz

test: bin/gtest

bin/gtest: $(obj_test) $(obj1) $(obj2) $(obj3) $(obj4)
	gcc $^ -o $@

$(obj_test): $(way_test)
	gcc $^ -o $@

bin/chessviz: $(obj1) $(obj2) $(obj3) $(obj4)
	gcc $^ -o $@

$(obj1): $(way1)
	gcc -c $^ -Werror -o $@

$(obj2): $(way2)
	gcc -c $^ -Werror -o $@

$(obj3): $(way3)
	gcc -c $^ -Werror -o $@

$(obj4): $(way4)
	gcc -c $^ -Werror -o $@

test: addDIR testlib bin/test

addDIR:
	mkdir bin build build/test -p

testlib:
	gcc -std=c++11 -isystem thirdparty/googletest/include -I thirdparty/googletest \
    -pthread -c thirdparty/googletest/src/gtest-all.cc -o build/test/gtest-all.o
	ar -rv build/test/libgtest.a build/test/gtest-all.o

bin/test: build/test/test.o  $(obj2)
	gcc -std=c++11 -isystem thirdparty/googletest/include -pthread $^ \
	build/test/libgtest.a -o $@

build/test/test.o: test/test.cpp
	gcc -c -Wall -Werror $^ -o $@

clean:
	rm -rf build/src/*.o
	rm -rf build/test/*.o
	rm -rf *.o
