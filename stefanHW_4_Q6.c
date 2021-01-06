#include <stdio.h>

int main (void) 
{	//creat the vers
	const int THE_CORUNT_YEAR =2020;
	char firstChar=' ';
	char secondChar=' ';
	char thirdChar=' ';
	int birthYear=0;
	int num=0;
	int age =0;
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
	// buffer clearing
	getchar();
	printf("hayyy %c%c%c!! in what year were you born?\n", firstChar, secondChar , thirdChar);
	//birth Year input
	scanf("%d",&birthYear);
	// buffer clearing
	getchar();
	//num input
	printf("a num between 1 and 100\n");
	scanf("%d",&num);
	//calculting the age
	age =THE_CORUNT_YEAR-birthYear;
	printf("youre %d years old right?\n", age);
	//calculting the % of num and the age
	printf("%d %% %d =%d\n",age,num,age%num);
}