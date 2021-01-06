#include <stdio.h>

int main()
{	
	// creating vers
    int age =0;
    int height =0;
	//input
    printf("input your age and heigh(cm) in thet order(age,height)\n");
    scanf("%d,%d", &age ,&height);
	//checking what sport the kid should play
	if (height>=185 || age<=15&&height>=175)
	{
		printf ( "go play basket ball");
	}
	else
	{
		printf("go play soccer");
	}
    return 0;
}
