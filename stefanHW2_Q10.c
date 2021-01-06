#include <stdio.h>
int main(void)
{
	int firstCousinsAge = 18;
	int secondCousinsAge = 12;
	int thirdCousinsAge = 17;
	int fourthCousinsAge = 3;
	int sumOfCousinsAges = firstCousinsAge+secondCousinsAge+thirdCousinsAge+fourthCousinsAge;
	int grandMothersAge =66;
	int grandFathersAge =68;
	int sumOfGrandParentsAges = grandFathersAge +grandMothersAge;
		
	printf ("the age of the first cousin is: %d \n\n",firstCousinsAge);
	printf ("the age of the second cousin is: %d \n\n",secondCousinsAge);
	printf ("the age of the third is : %d \n\n ",thirdCousinsAge);
	printf ("the age of the fourth is : %d \n\n",fourthCousinsAge);
	printf ("the sum of the ages of the cousins is: %d \n\n ",sumOfCousinsAges);
	printf ("the age of grand mother is: %d \n\n " ,grandMothersAge);
	printf ("the age of grand father is: %d \n\n " ,grandFathersAge);
	printf ("the sum of the grand parents ages is: %d \n\n " ,sumOfGrandParentsAges);
	if (sumOfCousinsAges>sumOfGrandParentsAges)
	{
		printf("the sum of the ages of the cousins is biger");
	}
	else if (sumOfCousinsAges<sumOfGrandParentsAges)
	{
		printf("the sum of the ages of the grand parents is biger");
	}
	else 
	{ 
		printf (" the sums are equle");
	}
	getchar();
	return (0);
}