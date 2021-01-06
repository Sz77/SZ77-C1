#include <stdio.h>

int main (void) 
{	//creat the vers
	char firstChar=' ';
	char secondChar=' ';
	char thirdChar=' ';
	//the first input
	printf("the first char is?\n");
	firstChar = getchar();
	// buffer clearing
	getchar();
	//the second input
	printf("the second char is ?\n");
	secondChar = getchar();
	// buffer clearing
	getchar();
	// the third input 
	printf("the third char is ?\n");
	thirdChar =getchar();
	printf("the name is %c%c%c\n", firstChar, secondChar , thirdChar);
}