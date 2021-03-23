/*********************************
* Class: MAGSHIMIM C2			 *
* Week 2           				 *
* HW solution 			 		 *
**********************************/

#include <stdio.h>

void add(int* x, int* y, int* sum);
/*
	errors
	int c is usles 
	add(&a, &c, &sum); is is already apointer 
	in func add all the veribels needed to be pointers in the calc as well
	no doc
*/
/* how i found the errors 
 i tried running the code and saw some errors
 i added breakpounts and run it in debug mode to see valus
 i chacked if all the place thet needed pointer had tham
*/
int main(void)
{
	
	int a = 0, b = 0, sum = 0;
	//input
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	getchar();//buffer cleaner
	add(&a, &b, &sum);//func calling
	//output
	printf("The sum of a and b is: %d", sum);
	getchar();
	return 0;
}

/*
this function adds 2 numbers uisug pointers
input: the numbers
output none
*/
void add(int* x, int* y, int* sum) 
{ 
	*sum = *x + *y; 
}
