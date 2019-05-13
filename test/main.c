#define CTEST_MAIN

#include "chessboard.h"
#include "chessgame.h"
#include "print_chess.h"

#include "ctest.h"

CTEST(Syntax, Correct)
{
    int reslt = correct_input("b2-b5");
    int expected = 0;
    ASSERT_EQUAL(expected, reslt);
}

CTEST(Syntax, Incorrect)
{
    int result = correct_input("a10-a9");
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(figure_step_rule, Correct)
{
    char b[8][8];
    chessboard(b);
    int result = figure_step_rule(0, 6, 0, 5, b, "a7-a6");
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(figure_step_rule, Incorrect)
{
    char b[8][8];
    chessboard(b);
    int result = figure_step_rule(0, 0, 0, 1, b, "a1-a2");
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(Exit, Correct)
{
    int result = exit_prog("exit");
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(Exit, Incorrect)
{
    int result = exit_prog("asfd");
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
