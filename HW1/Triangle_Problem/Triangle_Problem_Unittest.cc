#include <limits.h>
#include "Triangle_Problem.h"
#include "gtest/gtest.h"
namespace {

//In triangle problem, the boundary is [1, 200]

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

TEST(Solve_Triangle_Problem, WeakNormalEquivalenceTest) {
  // Test in weak normal equivalence class form.
  // Since no valid subintervals of variables a, b and c exist, 
  // so the strong normal equivalence class test cases are identical to the weak normal equivalence class test cases.
	EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(5, 5, 5));
	EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(2, 2, 3));
	EXPECT_STREQ("Scalene", Solve_Triangle_Problem(3, 4, 5));
	EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(4, 1, 2));
}

TEST(Solve_Triangle_Problem, WeakRobustEquivalenceTest) {
  // Test in weak robust equivalence class form.
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(-1, 5, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, -1, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, 5, -1));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(201, 5, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, 201, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, 5, 201));
}

TEST(Solve_Triangle_Problem, StrongRobustEquivalenceTest) {
  // Test in strong robust equivalence class form.
    EXPECT_STREQ("Out of range", Solve_Triangle_Problem(-1, 5, 5)); 
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, -1, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, 5, -1));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(-1, -1, 5));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(5, -1, -1));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(-1, 5, -1));
	EXPECT_STREQ("Out of range", Solve_Triangle_Problem(-1, -1, -1));
}

TEST(Solve_Triangle_Problem, EdgeTest) {
  // Test in edge testing form.
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(1, 1, 1);
    EXPECT_STREQ("Equilateral", Solve_Triangle_Problem(200, 200, 200);
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(2, 2, 1);
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(2, 1, 2);
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(1, 2, 2);
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(1, 200, 200);
    EXPECT_STREQ("Isosceles", Solve_Triangle_Problem(199, 200, 200);
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(2, 100, 101);
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(2, 199, 200);
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(199, 2, 200);
    EXPECT_STREQ("Scalene", Solve_Triangle_Problem(199, 200, 2);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(199, 200, 1);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1, 1, 2);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1, 1, 100);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1, 199, 200);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(199, 1, 200);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(199, 200, 1);
    EXPECT_STREQ("Not a triangle", Solve_Triangle_Problem(1, 2, 200);
}

}
