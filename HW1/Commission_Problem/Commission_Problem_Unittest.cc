#include <limits.h>
#include "Commission_Problem.h"
#include "gtest/gtest.h"
namespace {

// 1 ≤ fans ≤ 70 
// 1 ≤ pumps ≤ 80 
// 1 ≤ bodies ≤ 90
// output -1 = invalid input

TEST(Solve_NextDate_Problem, NormalBoundaryTest) {
	// Test in normal boundary value form.
	EXPECT_EQ(2800, Solve_Commission_Problem(35, 40, 1)); // Barrel min
	EXPECT_EQ(2825, Solve_Commission_Problem(35, 40, 2)); // Barrel min+
	EXPECT_EQ(5000, Solve_Commission_Problem(35, 40, 89)); // Barrel max-
	EXPECT_EQ(5025, Solve_Commission_Problem(35, 40, 90)); // Barrel max
	EXPECT_EQ(2730, Solve_Commission_Problem(35, 1, 45)); // Stock min
	EXPECT_EQ(2760, Solve_Commission_Problem(35, 2, 45)); // Stock min+
	EXPECT_EQ(5070, Solve_Commission_Problem(35, 79, 45)); // Stock max-
	EXPECT_EQ(5100, Solve_Commission_Problem(35, 80, 45)); // Stock max
	EXPECT_EQ(2370, Solve_Commission_Problem(1, 40, 45)); // Lock min
	EXPECT_EQ(2415, Solve_Commission_Problem(2, 40, 45)); // Lock min+
	EXPECT_EQ(5430, Solve_Commission_Problem(69, 40, 45)); // Lock max-
	EXPECT_EQ(5475, Solve_Commission_Problem(70, 40, 45)); // Lock max
	EXPECT_EQ(3900, Solve_Commission_Problem(35, 40, 45)); // all normal
}

TEST(Solve_NextDate_Problem, RobustBoundaryTest) {
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

TEST(Solve_NextDate_Problem, WeakNormalEquivalenceTest) {
  // Test in weak normal equivalence class form.

}

TEST(Solve_NextDate_Problem, StrongNormalEquivalenceTest) {
  // Test in strong normal equivalence class form.

}


TEST(Solve_NextDate_Problem, WeakRobustEquivalenceTest) {
  // Test in weak robust equivalence class form.

}

TEST(Solve_NextDate_Problem, StrongRobustEquivalenceTest) {
  // Test in strong robust equivalence class form.

}

TEST(Solve_NextDate_Problem, EdgeTest) {
  // Test in edge testing form.

}

TEST(Solve_NextDate_Problem, DecisionTableTest) {
  // Test in decision table testing form.
 
}

}