/*********************************
* Class: MAGSHIMIM C2			 *
* Week:                			 *
* Name:                          *
* Credits:                       *
**********************************/

#include <stdio.h>

void inputArray(int* arr, int size);
void arrayReverseOutput(int* arr, int size);

#define SIZE 10
int main(void)
{
	int arr[SIZE] = {0};
	inputArray(arr, SIZE);
	arrayReverseOutput(arr , SIZE);
	getchar();
	return 0;
}
/*
this func is used for input to array without []
input:the array and the size of the array
output:none
*/
void inputArray(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		scanf("%d", (arr + i));
		getchar();//bufer cleaner
	}
}
/*
this func is used for printig the array in reverse without []
input:the array and the size of the array
output:none
*/
void arrayReverseOutput(int* arr, int size)
{
	int i = 0;
	for (i = size - 1; i >= 0 ; i--)
	{
		printf("%d ", *(arr + i));
	}
}