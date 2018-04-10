#include <limits.h>
#include "NextDate_Problem.h"
#include "gtest/gtest.h"
namespace {

// c1. 1 <= day <= 31
// c2. 1 <= month <= 12
// c3. 1812 <= year <= 2012

TEST(Solve_NextDate_Problem, NormalBoundaryTest) {
	// Test in normal boundary value form.
    EXPECT_STREQ("1812/4/11", Solve_NextDate_Problem(1812,4,10); // year min
    EXPECT_STREQ("1813/4/11", Solve_NextDate_Problem(1813,4,10); // year min+
	EXPECT_STREQ("2000/4/11", Solve_NextDate_Problem(2000,4,10); // year nom
    EXPECT_STREQ("2011/4/11", Solve_NextDate_Problem(2011,4,10); // year max-
    EXPECT_STREQ("2012/4/11", Solve_NextDate_Problem(2012,4,10); // year max
    EXPECT_STREQ("2000/1/11", Solve_NextDate_Problem(2000,1,10); // month min
    EXPECT_STREQ("2000/2/11", Solve_NextDate_Problem(2000,2,10); // month min+
    EXPECT_STREQ("2000/6/11", Solve_NextDate_Problem(2000,6,10); // month nom
	EXPECT_STREQ("2000/11/11", Solve_NextDate_Problem(2000,11,10); // month max-
    EXPECT_STREQ("2000/12/11", Solve_NextDate_Problem(2000,12,10); // month max
    EXPECT_STREQ("2000/3/2", Solve_NextDate_Problem(2000,3,1); // day min
    EXPECT_STREQ("2000/3/3", Solve_NextDate_Problem(2000,3,2); // day min+
	EXPECT_STREQ("2000/3/11", Solve_NextDate_Problem(2000,3,10); // day nom
    EXPECT_STREQ("2000/3/31", Solve_NextDate_Problem(2000,3,30); // day max-
	EXPECT_STREQ("2000/4/1", Solve_NextDate_Problem(2000,3,31); // day max
}

TEST(Solve_NextDate_Problem, RobustBoundaryTest) {
	// Test in robust boundary value form.
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811,4,10); // year min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2012,4,10); // year max+
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,0,10); // month min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,13,10); // month max+
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,1,0); // day min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,1,32); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,2,30); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001,2,29); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001,4,31); // day max+
}

}