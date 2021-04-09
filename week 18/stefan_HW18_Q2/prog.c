/*********************************
* Class: MAGSHIMIM C2			 *
* Week:                			 *
* Name:                          *
* Credits:                       *
**********************************/

#include <stdio.h>
void printAfterX(int* arr, int n, int* x);
#define SIZE 10

int main(void)
{
	int arr[] = {4 ,8 ,6 ,2 ,1 ,3 ,5 ,7 ,8 ,9 ,5};
	int offset = 0;
	//input
	printf("enter the offset ");
	scanf("%d", &offset);
	getchar();//buffer cleaner

	printAfterX(arr, SIZE, arr + offset);
	getchar();
	return 0;
}

/*
	this func print the array from the offset to end if the offset is inside the array
	input the array,the size of the array and the offset in mamory
	output: none
*/
void printAfterX(int* arr, int n, int* x)
{
	if ((x >= arr) && (x < arr + n))
	{
		for ( x++ ; x != arr + n + 1; x++)
		{
   			printf("%d ", *x);
		}
	}
	else
	{
		printf("not in the array");
	}
}
