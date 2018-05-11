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

TEST(Solve_NextDate_Problem, C2_Testing) {
    EXPECT_STREQ("2000/11/30", Solve_NextDate_Problem(2000, 11, 29)); 
	EXPECT_STREQ("2000/12/1", Solve_NextDate_Problem(2000, 11, 30)); 
	EXPECT_STREQ("2001/1/1", Solve_NextDate_Problem(2000, 12, 31)); 
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 1, 1));
}

TEST(Solve_NextDate_Problem, MCDC_Testing) {
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811,6,10));
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2010,13,10));
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,10,0));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2012,2,40));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2012,11,40));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2007,2,29));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2007,2,40));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2007,11,40));
    EXPECT_STREQ("2001/1/1", Solve_NextDate_Problem(2000,12,31));
    EXPECT_STREQ("2013/1/1", Solve_NextDate_Problem(2012,12,31));
    EXPECT_STREQ("2012/2/1", Solve_NextDate_Problem(2012,1,31));
    EXPECT_STREQ("2012/12/31", Solve_NextDate_Problem(2012,12,30));
    EXPECT_STREQ("2012/3/1", Solve_NextDate_Problem(2012,2,29));
    EXPECT_STREQ("2012/2/29", Solve_NextDate_Problem(2012,2,28));
    EXPECT_STREQ("2012/12/1", Solve_NextDate_Problem(2012,11,30));
    EXPECT_STREQ("2012/5/1", Solve_NextDate_Problem(2012,4,30));
    EXPECT_STREQ("2012/11/30", Solve_NextDate_Problem(2012,11,29));
    EXPECT_STREQ("2008/1/1", Solve_NextDate_Problem(2007,12,31));
    EXPECT_STREQ("2007/2/1", Solve_NextDate_Problem(2007,1,31));
    EXPECT_STREQ("2007/12/31", Solve_NextDate_Problem(2007,12,30));
    EXPECT_STREQ("2007/3/1", Solve_NextDate_Problem(2007,2,28));
    EXPECT_STREQ("2007/12/1", Solve_NextDate_Problem(2007,11,30));
    EXPECT_STREQ("2007/5/1", Solve_NextDate_Problem(2007,4,30));
    EXPECT_STREQ("2007/11/30", Solve_NextDate_Problem(2007,11,29));
}

}