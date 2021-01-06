
#include <stdio.h>

int main()
{
	//creating the ver
	char theUserChar = ' ';
	// input
	printf("input y or n\n\n");
	scanf("%c",&theUserChar);
	//chakes if the char is y
	if(theUserChar=='y'){
		printf("yes\n");
	}
	//chakes if the char is n
	else if(theUserChar == 'n')
	{
		printf("no\n");
	}
	else 
	//saing the input isnt vulide
	{
		printf("I said y or n not %c",theUserChar);
	}
	// prints FUZZY
	printf("FUZZY");
	return 0;
}
