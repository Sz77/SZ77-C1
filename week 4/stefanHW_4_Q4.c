#include <stdio.h>
#define ILS_TO_DIRHAM_RETIO 1.0873

int main()
{
	unsigned  float numOfIls=0;
	printf("Welcome to United Arab Emirates, how many ILS you have?\n");
	scanf("%f",&numOfIls);
	printf("You have %.2f Dirham\n", ILS_TO_DIRHAM_RETIO*numOfIls);

	return 0;
}
