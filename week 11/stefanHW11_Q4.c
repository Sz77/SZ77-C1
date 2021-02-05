#include <stdio.h>
#include <stdlib.h>

#define ARR_LENGTH 2

void initArray(int arr[]);
void printGrades(int first, int second);
/*
#################################################################
#                   bugs                                        #
#initArray returns an array                                     #
#int first = myGrades; gets the addres of an array              #
#no buffer cleaneng after scanf                                 #
#  ____________________________________                         #
#the reson for the wird num its the place in memory of the array#
#                                                               #
#                                                               #
#################################################################*/
int main(void)
{
	int myGrades[ARR_LENGTH] = {0};
	
	initArray(myGrades);
	
	int first = myGrades[0];
	int second = myGrades[1];	
	
	printGrades(first, second);
		getchar();
	return 0;
	
}

/*
Function will change values of array (input from user)
input: array to change
output: none
*/
void initArray(int arr[])
{
	printf("Enter grades in English and history: ");
	scanf("%d %d", &arr[0], &arr[1]);
	getchar();//bufer cleaner
}

/*
Function will print two grades
input: the grades to print
output: none
*/
void printGrades(int first, int second)
{
	printf("My grade in English is: %d!\n",first);
	printf("My grade in History is %d! Great Success!\n",second);
}
