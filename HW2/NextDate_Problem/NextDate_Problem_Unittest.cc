#include <limits.h>
#include "NextDate_Problem.h"
#include "gtest/gtest.h"
namespace {

// c1. 1 <= day <= 31
// c2. 1 <= month <= 12
// c3. 1812 <= year <= 2012

TEST(Solve_NextDate_Problem, C0_Testing) {
    EXPECT_STREQ("2000/1/2", Solve_NextDate_Problem(2000, 1, 1)); 
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 1, 1));
}

TEST(Solve_NextDate_Problem, C1_Testing) {
    EXPECT_STREQ("2000/11/30", Solve_NextDate_Problem(2000, 11, 29)); 
	EXPECT_STREQ("2000/12/1", Solve_NextDate_Problem(2000, 11, 30)); 
	EXPECT_STREQ("2001/1/1", Solve_NextDate_Problem(2000, 12, 31)); 
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 1, 1));
}

TEST(Solve_NextDate_Problem, C1_Testing) {
    EXPECT_STREQ("2000/11/30", Solve_NextDate_Problem(2000, 11, 29)); 
	EXPECT_STREQ("2000/12/1", Solve_NextDate_Problem(2000, 11, 30)); 
	EXPECT_STREQ("2001/1/1", Solve_NextDate_Problem(2000, 12, 31)); 
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 1, 1));
}

TEST(Solve_NextDate_Problem, C2_Testing) {
    EXPECT_STREQ("2000/11/30", Solve_NextDate_Problem(2000, 11, 29)); 
	EXPECT_STREQ("2000/12/1", Solve_NextDate_Problem(2000, 11, 30)); 
	EXPECT_STREQ("2001/1/1", Solve_NextDate_Problem(2000, 12, 31)); 
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 1, 1));
}

}