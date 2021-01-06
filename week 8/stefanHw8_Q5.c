/*********************************
* Class: MAGSHIMIM C1			 *
* Week 7           				 *
**********************************/

#include <stdio.h>
#include <stdlib.h>

#define LOWER_NUM 0
#define UPPER_NUM 172486
/*
Bug Report: 
1. non descriptive coment and names
2.in getNumber the veribl creation was after the print
3.typo in 'useage'(usage)
*/
void welcome(void);
void usage(void);
void getNumber(void);
void printNumTwice(int number);

int main(void)
{
	welcome();
	return 0;
}

/*
the function prints a welcome massage
and calls usage
input: none
output: none
*/
void welcome(void)
{
	printf("Welcome to my cool program!\n");
	usage();
}

/*
the function prints what the program is doing 
and calls getNumber
input: none
output: none
*/
void usage(void)
{
	printf("My program gets a number from you - and prints it twice in a row!\n");
	getNumber();
}

/*
The function asks for number input
between 0 and 172486
and calls printNumTwice
input: none
output: none
*/
void getNumber(void)
{
	int number = 0;
	printf("Please enter a number between 0 - 172,486: \n");
// int number was here (you put the veribls before everything else)
	scanf("%d", &number);
	while(number < LOWER_NUM|| number > UPPER_NUM)
	{
		printf("Invalid choice!\n");
		scanf("%d", &number);
	}
	printNumTwice(number);
}


/*
the function prints a number twice
input: the number we got from the user.
output: none
*/
void printNumTwice(int number)
{
	printf("The number twice in a row: %d %d", number, number);
}