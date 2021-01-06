#include <stdio.h>
int main (void)
{	
	int theDayOfBirth= 22;
	int theMonthOfBirth = 9;
	int theYearOfBirth = 2004;
	char charTheDayOfBirthFirstNum= '2';
	char charTheDayOfBirthSecondNum= '2';
	//I was too lazy to do it the right way (with the ascii tabel)
	char charTheMonthOfBirth=	'9';
	char charTheYearOfBirthFirstNum = '2';
	char charTheYearOfBirthSecondAndThirdNum = '0';
	char charTheYearOfBirthFourthNum = '4';
	printf("my birthday is:%d/%d/%d\n\n",theDayOfBirth,theMonthOfBirth,theYearOfBirth);
	printf("my birthday is:%c%c/%c/%c%c%c%c",charTheDayOfBirthFirstNum,charTheDayOfBirthSecondNum,
	charTheMonthOfBirth,charTheYearOfBirthFirstNum,charTheYearOfBirthSecondAndThirdNum,charTheYearOfBirthSecondAndThirdNum
	,charTheYearOfBirthFourthNum);
	
	
	       
	getchar();
	
	
}