#include <limits.h>
#include "Triangle_Problem.h"
#include "gtest/gtest.h"
namespace {

//In the triangle problem, the boundary is [1, 200]

// C0 coverage
TEST(Solve_Triangle_Problem, C0Test) {
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(50,50,199));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5,5,5));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(5,5,1));
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3,5,4));
    EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5,5,0));
}

}
