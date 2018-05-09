#include <limits.h>
#include "Triangle_Problem.h"
#include "gtest/gtest.h"
namespace {

//In the triangle problem, the boundary is [1, 200]

// C0 coverage
TEST(Solve_Triangle_Problem, C0Test) {
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,2,3));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,4,5));
}

// C1 coverage
TEST(Solve_Triangle_Problem, C1Test) {
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,2,3));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,4,5));
    EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(5,5,0));
}

// C2 coverage
TEST(Solve_Triangle_Problem, C2Test) {
	// Because Triangle Problem doesn't have a loop, it is same as C1 Test
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,2,3));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,4,5));
    EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(5,5,0));
}

// MCDC coverage
TEST(Solve_Triangle_Problem, MCDCTest) {
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(1,1,201));
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(1,201,1));
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(201,1,1));
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(1,1,0));
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(1,0,1));
	EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(0,1,1));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
	EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,2,3));
	EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,3,2));
	EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(3,2,1));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
	EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,1,5));
	EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(1,5,5));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,4,5));
}

}
