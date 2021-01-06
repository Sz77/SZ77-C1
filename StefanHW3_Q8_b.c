#include <stdio.h>
#define NUM_OF_MONTHS_IN_YEAR 12 

int main (void)
{		
	const int DAYS_WORKED_IN_MONTH =24;
	const float HOURS_WORKED_IN_ADAY = 8.5;
	const float HOURLY_WAGE = 8.15;
	float yearlySalary = (DAYS_WORKED_IN_MONTH*HOURLY_WAGE*HOURS_WORKED_IN_ADAY*NUM_OF_MONTHS_IN_YEAR);

	printf ("the yearly salary is:%.2f\n" , yearlySalary);
	getchar();
}