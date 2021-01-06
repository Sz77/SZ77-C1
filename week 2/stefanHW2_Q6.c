#include <stdio.h>
int main(void)
{
	int firstCousinsAge = 18;
	printf ("the age of the first cousin is: %d \n\n",firstCousinsAge);
	int secondCousinsAge = 12;
	printf ("the age of the second cousin is: %d \n\n",secondCousinsAge);
	int thirdCousinsAge = 17;
	printf ("the age of the third is : %d \n\n ",thirdCousinsAge);
	int fourthCousinsAge = 3;
	printf ("the age of the fourth is : %d \n\n",fourthCousinsAge);
	int sumOfCousinsAges = firstCousinsAge+secondCousinsAge+thirdCousinsAge+fourthCousinsAge;
	printf ("the sum of the ages of the cousins is: %d \n\n ",sumOfCousinsAges);
	int grandMothersAge =66;
	printf ("the age of grand mother is: %d \n\n " ,grandMothersAge);
	int grandFathersAge =68;
	printf ("the age of grand father is: %d \n\n " ,grandFathersAge);
	int sumOfgrandParentsAges = grandFathersAge+grandMothersAge;
	printf ("the sum of the ages of the grand parents is: %d \n\n , sumOfgrandParentsAges
	if (sumOfCousinsAges>sumOfgrandParents){
		printf("the sum of the ages of the cousins is biger");
	}
	else {printf("the sum of the ages of the grand parents is biger");
	}
	getchar();
	return (0);
}