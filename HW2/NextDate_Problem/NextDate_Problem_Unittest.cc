#include <limits.h>
#include "NextDate_Problem.h"
#include "gtest/gtest.h"
namespace {

// c1. 1 <= day <= 31
// c2. 1 <= month <= 12
// c3. 1812 <= year <= 2012

TEST(Solve_NextDate_Problem, NormalBoundaryTest) {
	// Test in normal boundary value form.
    EXPECT_STREQ("1812/4/11", Solve_NextDate_Problem(1812, 4, 10)); // year min
    EXPECT_STREQ("1813/4/11", Solve_NextDate_Problem(1813, 4, 10)); // year min+
	EXPECT_STREQ("2000/4/11", Solve_NextDate_Problem(2000, 4, 10)); // year nom
    EXPECT_STREQ("2011/4/11", Solve_NextDate_Problem(2011, 4, 10)); // year max-
    EXPECT_STREQ("2012/4/11", Solve_NextDate_Problem(2012, 4, 10)); // year max
    EXPECT_STREQ("2000/1/11", Solve_NextDate_Problem(2000, 1, 10)); // month min
    EXPECT_STREQ("2000/2/11", Solve_NextDate_Problem(2000, 2, 10)); // month min+
    EXPECT_STREQ("2000/6/11", Solve_NextDate_Problem(2000, 6, 10)); // month nom
	EXPECT_STREQ("2000/11/11", Solve_NextDate_Problem(2000, 11, 10)); // month max-
    EXPECT_STREQ("2000/12/11", Solve_NextDate_Problem(2000, 12, 10)); // month max
    EXPECT_STREQ("2000/3/2", Solve_NextDate_Problem(2000, 3, 1)); // day min
    EXPECT_STREQ("2000/3/3", Solve_NextDate_Problem(2000, 3, 2)); // day min+
	EXPECT_STREQ("2000/3/11", Solve_NextDate_Problem(2000, 3, 10)); // day nom
    EXPECT_STREQ("2000/3/31", Solve_NextDate_Problem(2000, 3, 30)); // day max-
	EXPECT_STREQ("2000/4/1", Solve_NextDate_Problem(2000, 3, 31)); // day max
}

TEST(Solve_NextDate_Problem, RobustBoundaryTest) {
	// Test in robust boundary value form.
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 4, 10)); // year min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2013, 4, 10)); // year max+
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 0, 10)); // month min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 13, 10)); // month max+
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 1, 0)); // day min-
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 1, 32)); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 2, 30)); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001, 2, 29)); // day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 4, 31)); // day max+
}

TEST(Solve_NextDate_Problem, WeakNormalEquivalenceTest) {
  // Test in weak normal equivalence class form.
	EXPECT_STREQ("2000/6/15", Solve_NextDate_Problem(2000, 6, 14)); // WN1
	EXPECT_STREQ("1996/7/30", Solve_NextDate_Problem(1996, 7, 29)); // WN2
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2002, 2, 30)); // WN3
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 6, 31)); // WN4
}

TEST(Solve_NextDate_Problem, StrongNormalEquivalenceTest) {
  // Test in strong normal equivalence class form.
	EXPECT_STREQ("2000/6/15", Solve_NextDate_Problem(2000, 6, 14)); // SN1
	EXPECT_STREQ("1996/6/15", Solve_NextDate_Problem(1996, 6, 14)); // SN2
	EXPECT_STREQ("2002/6/15", Solve_NextDate_Problem(2002, 6, 14)); // SN3
	EXPECT_STREQ("2000/6/30", Solve_NextDate_Problem(2000, 6, 29)); // SN4
	EXPECT_STREQ("1996/6/30", Solve_NextDate_Problem(1996, 6, 29)); // SN5
	EXPECT_STREQ("2002/6/30", Solve_NextDate_Problem(2002, 6, 29)); // SN6
	EXPECT_STREQ("2000/7/1", Solve_NextDate_Problem(2000, 6, 30)); // SN7
	EXPECT_STREQ("1996/7/1", Solve_NextDate_Problem(1996, 6, 30)); // SN8
	EXPECT_STREQ("2002/7/1", Solve_NextDate_Problem(2002, 6, 30)); // SN9
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 6, 31)); // SN10
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1996, 6, 31)); // SN11
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2002, 6, 31)); // SN12
	EXPECT_STREQ("2000/7/15", Solve_NextDate_Problem(2000, 7, 14)); // SN13
	EXPECT_STREQ("1996/7/15", Solve_NextDate_Problem(1996, 7, 14)); // SN14
	EXPECT_STREQ("2002/7/15", Solve_NextDate_Problem(2002, 7, 14)); // SN15
	EXPECT_STREQ("2000/7/30", Solve_NextDate_Problem(2000, 7, 29)); // SN16
	EXPECT_STREQ("1996/7/30", Solve_NextDate_Problem(1996, 7, 29)); // SN17
	EXPECT_STREQ("2002/7/30", Solve_NextDate_Problem(2002, 7, 29)); // SN18
	EXPECT_STREQ("2000/7/31", Solve_NextDate_Problem(2000, 7, 30)); // SN19
	EXPECT_STREQ("1996/7/31", Solve_NextDate_Problem(1996, 7, 30)); // SN20
	EXPECT_STREQ("2002/7/31", Solve_NextDate_Problem(2002, 7, 30)); // SN21	
	EXPECT_STREQ("2000/8/1", Solve_NextDate_Problem(2000, 7, 31)); // SN22
	EXPECT_STREQ("1996/8/1", Solve_NextDate_Problem(1996, 7, 31)); // SN23
	EXPECT_STREQ("2002/8/1", Solve_NextDate_Problem(2002, 7, 31)); // SN24	
	EXPECT_STREQ("2000/3/1", Solve_NextDate_Problem(2000, 2, 29)); // SN25
	EXPECT_STREQ("1996/3/1", Solve_NextDate_Problem(1996, 2, 29)); // SN26
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2002, 2, 29)); // SN27	
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 2, 30)); // SN28
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1996, 2, 30)); // SN29
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2002, 2, 30)); // SN30
}


TEST(Solve_NextDate_Problem, WeakRobustEquivalenceTest) {
  // Test in weak robust equivalence class form.
    EXPECT_STREQ("1996/6/15", Solve_NextDate_Problem(1996, 6, 14)); // WR1
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, -1, 15) ); // WR2, month min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, 13, 15) ); // WR3, month max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, 6, -1) ); // WR4, day min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, 6, 32) ); // WR5, day max+
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 6, 15) ); // WR6, year min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2013, 6, 15) ); // WR7, year max+
}

TEST(Solve_NextDate_Problem, StrongRobustEquivalenceTest) {
  // Test in strong robust equivalence class form.
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, -1, 15) ); // SR1, month min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, 6, -1) ); // SR2, day min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 6, 15) ); // SR3, year min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1912, -1, -1) ); // SR4, month and day min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, 6, -1) ); // SR5, day and year min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, -1, 15) ); // SR6, month and year min-
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(1811, -1, -1) ); // SR7, year, month and day min-
}

TEST(Solve_NextDate_Problem, EdgeTest) {
  // Test in edge testing form.
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 4, 0));
    EXPECT_STREQ("2000/4/2", Solve_NextDate_Problem(2000, 4, 1));
    EXPECT_STREQ("2000/4/30", Solve_NextDate_Problem(2000,4,29));
    EXPECT_STREQ("2000/5/1", Solve_NextDate_Problem(2000,4,30));
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,4,31));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 3, 0));
    EXPECT_STREQ("2000/3/2", Solve_NextDate_Problem(2000, 3, 1));
    EXPECT_STREQ("2000/3/31", Solve_NextDate_Problem(2000, 3, 30));
    EXPECT_STREQ("2000/4/1", Solve_NextDate_Problem(2000, 3, 31));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000, 3, 32));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,2,0));
    EXPECT_STREQ("2000/2/2", Solve_NextDate_Problem(2000,2,1));
    EXPECT_STREQ("2000/2/29", Solve_NextDate_Problem(2000,2,28));
    EXPECT_STREQ("2000/3/1", Solve_NextDate_Problem(2000,2,29));
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2000,2,30));
}

TEST(Solve_NextDate_Problem, DecisionTableTest) {
  // Test in decision table testing form.
    EXPECT_STREQ("2001/4/16", Solve_NextDate_Problem(2001, 4, 15));
    EXPECT_STREQ("2001/5/1", Solve_NextDate_Problem(2001, 4,30));
    EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001, 4, 31));
    EXPECT_STREQ("2001/1/16", Solve_NextDate_Problem(2001, 1, 15));
    EXPECT_STREQ("2001/2/1", Solve_NextDate_Problem(2001, 1, 31));
    EXPECT_STREQ("2001/12/16", Solve_NextDate_Problem(2001, 12, 15));
    EXPECT_STREQ("2002/1/1", Solve_NextDate_Problem(2001, 12, 31));
    EXPECT_STREQ("2001/2/16", Solve_NextDate_Problem(2001, 2, 15));
    EXPECT_STREQ("2000/2/29", Solve_NextDate_Problem(2000, 2, 28));
    EXPECT_STREQ("2001/3/1", Solve_NextDate_Problem(2001, 2, 28));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001, 2, 29));
    EXPECT_STREQ("2004/3/1", Solve_NextDate_Problem(2004, 2, 29));
	EXPECT_STREQ("Invalid Input", Solve_NextDate_Problem(2001, 2, 30));
}

}