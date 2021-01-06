#include <stdio.h>

int main()
{
	//creating varibels 
    int num =0;
    int sum=0;
	//input
    printf("input a num\n");
    scanf("%d",&num);
	//summing all the dividers
    for(int i =1 ;i<num ;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
	//chacking if the sum equal to the num and printing it with a message
    (sum==num)?printf("yes the num %d is perfect",num):printf("no the num %d isnt perfect",num);
    

    return 0;
}
