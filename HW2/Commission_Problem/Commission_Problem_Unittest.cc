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

TEST(Solve_Commission_Problem, C2_Testing) {
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 10, 10));
	EXPECT_EQ(64, Solve_Commission_Problem(2, 10, 10));
	EXPECT_EQ(220, Solve_Commission_Problem(20, 20, 12));
	EXPECT_EQ(1400, Solve_Commission_Problem(69, 79, 89)); 
}

TEST(Solve_Commission_Problem, MCDC_Testing) {
	EXPECT_EQ(0, Solve_Commission_Problem(-1, 10, 10));
	EXPECT_EQ(-1, Solve_Commission_Problem(0, 1, 1));
	EXPECT_EQ(-1, Solve_Commission_Problem(1, 0, 1));
	EXPECT_EQ(-1, Solve_Commission_Problem(1, 1, 0));
	EXPECT_EQ(-1, Solve_Commission_Problem(71, 1, 1));
	EXPECT_EQ(-1, Solve_Commission_Problem(1, 81, 1));
	EXPECT_EQ(-1, Solve_Commission_Problem(1, 1, 91));
	EXPECT_EQ(260, Solve_Commission_Problem(10, 10, 50));
	EXPECT_EQ(300, Solve_Commission_Problem(10, 50, 10));
	EXPECT_EQ(420, Solve_Commission_Problem(50, 10, 10));
	EXPECT_EQ(1400, Solve_Commission_Problem(69, 79, 89)); 
}

}