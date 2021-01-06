#include <stdio.h>

int main (void) 
{	
	// crateing the variables
	char firstChar= 'H';
	char secondChar=' ';
	char thirdChar =' ';
	printf("the first char is H without input\n");
	//first input
	printf("enter the second char\n");
	secondChar =getchar();
	//buffer clearing
	getchar();
	//second input
	printf("enter the third char\n");
	scanf("%c", & thirdChar);
	//printing the first char and the char after it 
	printf("the first char:%c and the char after it:%c\n", firstChar ,firstChar+1); 
	// printing the the ascii value of first
	printf("the value %d\n", firstChar);
	// printing the sum of the ascii values (all nums)
	printf("the sum of the ascii values %d\n", (firstChar+secondChar+thirdChar));
	// printing the sum of the ascii values (firstChar + thirdChar)
	printf("the sum of the ascii values firstChar+ thirdChar: %d\n", firstChar + thirdChar);
	//printing the ascii char from the last value
	printf("the ascii char %c\n", (firstChar+thirdChar));
	
	
}