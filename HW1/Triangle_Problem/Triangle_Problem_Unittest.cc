#include <limits.h>
#include "Triangle_Problem.h"
#include "gtest/gtest.h"
namespace {

// Test output message is correct or not.
TEST(Solve_Triangle_Problem, NormalBoundaryTest) {
  // Test in normal boundary value form.
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,100,1));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,100,2));
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(100,100,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,100,199));
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(100,100,200));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,1,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,2,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(100,199,100));
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(100,200,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(1,100,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(2,100,100));
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(199,100,100));
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(200,100,100));
}

TEST(Solve_Triangle_Problem, RobustBoundaryTest) {
  // Test in robust boundary value form.
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(100,100,0));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(100,100,201));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(0,100,100));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(201,100,100));	
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(100,0,100));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(100,201,100));
}