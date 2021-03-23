/*********************************
* Class: MAGSHIMIM C2			 *
* Week:                			 *
* Name:                          *
* Credits:                       *
**********************************/

#include <stdio.h>
void swap(float* num1, float* num2);

int main(void)
{

	float num1 = 0, num2 = 0;
	//input
	printf("enter 2 numbers\n");
	scanf("%f", &num1);
	getchar();//buffer cleaner
	scanf("%f", &num2);
	getchar();//buffer cleaner
	//callinf the swap function
	swap(&num1, &num2);
	//output
	printf("swaped : %f  %f", num1, num2);	
	getchar();
	return 0;
}

/*
this func swaps between two floats using the pointers
input: the pointers
output: none
*/
void swap(float* num1, float* num2)
{
	float temp = *num1;
	*num1 = *num2;
	*num2 = temp; 
}
