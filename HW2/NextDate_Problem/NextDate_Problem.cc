#include "NextDate_Problem.h"
#include <cstdio>
#include <cstring>

using namespace std;

// c1. 1 <= day <= 31
// c2. 1 <= month <= 12
// c3. 1812 <= year <= 2012

char* Solve_NextDate_Problem(int year, int month, int day) {
	char *output=NULL;
	char the_output[1000];
	int tomorrow_day = day;
	int tomorrow_month = month;
	int tomorrow_year = year;
	int x;

	if((year>2012||year<1812)||(day>31 || day<1)||(month>12 || month<1)) {			
		return "Invalid Input";
	}
	
	if(month==2){		
		if(day<28){
			tomorrow_day=day+1;
		}
		else if(day==28){
			if (((year%4 == 0) && (year%100 !=0)) || (year%400==0)){
				// leap year
				tomorrow_day=29;
			}else{
				// not leap year
				tomorrow_day=1;
				tomorrow_month=3;
			}	
		}
		else if(day==29){
			if(((year%4 == 0) && (year%100 !=0)) || (year%400==0)){
				// leap year
				tomorrow_day=1;
				tomorrow_month=3;
			}
			else{
				//not leap year			
				return "Invalid Input";
			}			
		}
		else{
			return "Invalid Input";	
		}		
	}
	else if(month==12){
		if(day<31){
			tomorrow_day=day+1;
		}
		else{
			tomorrow_day=1;
			tomorrow_month=1;
			tomorrow_year=year+1;		
		}
	}
	else if(month==4||month==6||month==9||month==11){
		if(day==31){
			return "Invalid Input";		
		}else if(day<30){
			tomorrow_day=day+1;
		}else{
			tomorrow_day=1;
			tomorrow_month=month+1;
		}		
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==10){
		if(day<31){
			tomorrow_day=day+1;
		}
		else{
			tomorrow_month=month+1;
			tomorrow_day=1;
		}		
	}
	else{	
		return "Unexpected Error";
	}

	x = sprintf(the_output,"%d/%d/%d",tomorrow_year,tomorrow_month,tomorrow_day);
	
	//return the_output;
	output=the_output;
	return output;

}

