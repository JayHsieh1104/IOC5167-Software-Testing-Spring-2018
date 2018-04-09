#include "Triangle_Problem.h"
#include <cstdio>

using namespace std;

char*  Solve_Triangle_Problem(int a, int b, int c) {
	if (a < 1 || b < 1 || c < 1 || a > 200 || b > 200 || c > 200)
		return "Invalid Input";
	if( !(a + b > c && a + c > b && b + c > a) )
		return "Not a triangle";
	if( a==b || b==c || c==a){
		if (a==b && b==c && c==a)
			return "Equilateral";
		else
			return "Isosceles";
	}
	return "Scalene";
}