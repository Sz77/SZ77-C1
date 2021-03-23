/*********************************
* Class: MAGSHIMIM C2			 *
* Week:                			 *
* Name:                          *
* Credits:                       *
**********************************/

#include <stdio.h>

void swap(float* num1, float* num2);
void sort(float* num1, float* num2 ,float* num3);
int main(void)
{
	float num1 ,num2 ,num3;
	//input
	printf("enter three nums");
	scanf("%f %f %f", &num1, &num2, &num3);
	getchar();//buffer cleaner
	//calling the sort function
	sort(&num1, &num2, &num3);
	//output 
	printf("the sorted numbers first %f , second %f third %f", num1, num2, num3);

	getchar();
	return 0;
}
/*
this function sorts the numbers and the biggest in num 3
input: the number to be sorted
output: none
*/
void sort(float* num1, float* num2, float* num3)
{
	if (*num1 > *num2)
	{
		swap(num1, num2);
	}
    if (*num1 > *num3)
    {
        swap(num1 , num3);
    }
	if (*num2 > *num3)
	{
		swap(num2, num3);
	}	
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
