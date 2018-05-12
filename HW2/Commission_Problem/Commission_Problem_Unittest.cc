#include <limits.h>
#include "Commission_Problem.h"
#include "gtest/gtest.h"
namespace {

// 1 ≤ fans ≤ 70 
// 1 ≤ pumps ≤ 80 
// 1 ≤ bodies ≤ 90
// output -1 = invalid input

TEST(Solve_Commission_Problem, C0_Testing) {
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 10, 10));
	EXPECT_EQ(640, Solve_Commission_Problem(35, 40, 45)); 
}

TEST(Solve_Commission_Problem, C1_Testing) {
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 10, 10));
	EXPECT_EQ(220, Solve_Commission_Problem(20, 20, 12));
	EXPECT_EQ(1400, Solve_Commission_Problem(69, 79, 89)); 
}

/*
TEST(Solve_Commission_Problem, RobustBoundaryTest) {
	// Test in robust boundary value form.
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 40, 0)); // Barrel min-
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 40, 91)); // Barrel max+
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 0, 45)); // Stock min-
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 81, 45)); // Stock max+
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 40, 45)); // Lock min-
	EXPECT_EQ(-1, Solve_Commission_Problem(71, 40, 45)); // Lock max+
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 0, 0)); // Barrel, Stock min-
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 40, 0)); // Barrel, Lock min-
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 0, 45)); // Stock, Lock min-	
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 0, 0)); // all min-
}

TEST(Solve_Commission_Problem, WeakNormalEquivalenceTest) {
  // Test in weak normal equivalence class form.
	EXPECT_EQ(640, Solve_Commission_Problem(35, 40, 45)); 
}

TEST(Solve_Commission_Problem, StrongNormalEquivalenceTest) {
  // Test in strong normal equivalence class form.
	EXPECT_EQ(640, Solve_Commission_Problem(35, 40, 45)); 
}

TEST(Solve_Commission_Problem, WeakRobustEquivalenceTest) {
  // Test in weak robust equivalence class form.
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 40, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(71, 40, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 0, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 81, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 40, 0)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 40, 91)); 
}

TEST(Solve_Commission_Problem, StrongRobustEquivalenceTest) {
  // Test in strong robust equivalence class form.
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 40, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 0, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 40, 0)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 0, 45)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 40, 0)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(35, 0, 0)); 
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 0, 0)); 
}

TEST(Solve_Commission_Problem, EdgeTest) {
  // Test in edge testing form.
    EXPECT_EQ(-1, Solve_Commission_Problem(-3, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(-2, 10, 10));
    EXPECT_EQ(0, Solve_Commission_Problem(-1, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(0, 10, 10));
    EXPECT_EQ(59.5, Solve_Commission_Problem(1, 10, 10));
    EXPECT_EQ(64, Solve_Commission_Problem(2, 10, 10));
    EXPECT_EQ(591, Solve_Commission_Problem(69, 10, 10));
    EXPECT_EQ(600, Solve_Commission_Problem(70, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(71, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(72, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, -1, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 0, 10));
    EXPECT_EQ(73, Solve_Commission_Problem(10, 1, 10));
    EXPECT_EQ(76, Solve_Commission_Problem(10, 2, 10));
    EXPECT_EQ(474, Solve_Commission_Problem(10, 79, 10));
    EXPECT_EQ(480, Solve_Commission_Problem(10, 80, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 81, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 82, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, -1));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, 0));
    EXPECT_EQ(77.5, Solve_Commission_Problem(10, 10, 1));
    EXPECT_EQ(80, Solve_Commission_Problem(10, 10, 2));
    EXPECT_EQ(455, Solve_Commission_Problem(10, 10, 89));
    EXPECT_EQ(460, Solve_Commission_Problem(10, 10, 90));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, 91));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, 92));
}

TEST(Solve_Commission_Problem, DecisionTableTest) {
  // Test in decision table testing form.
    EXPECT_EQ(660, Solve_Commission_Problem(40, 40, 40));
    EXPECT_EQ(0, Solve_Commission_Problem(-1, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(0, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(71, 10, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 0, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 81, 10));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, 0));
    EXPECT_EQ(-1, Solve_Commission_Problem(10, 10, 91));
}
*/

}