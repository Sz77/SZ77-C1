/*********************************
* Class: MAGSHIMIM C2			 *
* Week:                			 *
* Name:                          *
* Credits:                       *
**********************************/

#include <stdio.h>
void inputArray(int* arr);
#define SIZE 10
int main(void)
{
	int i = 0;
	int arr[SIZE] = { 0 };
	int* p = arr;
	inputArray(arr);

	for (i = 0; i < SIZE; i++)
	{
		printf("%d", *(p + i));
	}


	getchar();
	return 0;
}


/*
this func is the input function
input: the array
output: none

*/
void inputArray(int* arr)
{
	int i = 0;
	int* p = arr;
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", (p + i));
	}
}