#include <stdio.h>
int main (void)
{	
	char theCharA = 'A';
	char theCharZ = 'Z';
	printf("the first char is:%c \n",theCharA);
	printf("the second char is:%c\n" ,theCharZ);
	printf("the num of chars without A and Z :%d\n", (theCharZ-theCharA-1));
	getchar();
	
	
}