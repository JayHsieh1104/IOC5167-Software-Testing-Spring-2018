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
TEST(Solve_Triangle_Problem, C0Test) {
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1,2,3));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,4,5));
    EXPECT_STREQ("Invalid Input", Solve_Triangle_Problem(5,5,0));
}


}
