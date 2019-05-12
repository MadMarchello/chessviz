#define CTEST_MAIN

#include "chessboard.h"
#include "chessgame.h"
#include "print_chess.h"

#include "ctest.h"

CTEST(Syntax, Correct) {
  int reslt = correct_input("b2-b5");
  int expected = 0;
  ASSERT_EQUAL(expected, reslt);
}

CTEST(Syntax, Incorrect) {
  int result = correct_input("a2-a9");
  int expected = 1;
  ASSERT_EQUAL(expected, result);
}
int main(int argc, const char** argv) { return ctest_main(argc, argv); }
