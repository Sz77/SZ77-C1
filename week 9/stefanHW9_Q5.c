/*********************************
* Class: MAGSHIMIM C1			 *
* Week 8           				 *
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int areValidNumbers(int num1,int num2, int num3);


int main(void)
{
    // setting up veribels
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
    //setting the seed for the random num genertion
	srand(time(NULL));
	//canging the nums until tere are corect
	do
	{
	    num1= rand()%(100+1)+1;
	    num2= rand()%(100+1)+1;
	    num3= rand()%(100+1)+1;
	}
	while(areValidNumbers==0);
	//printing the nums
	printf("%d,%d,%d",num1,num2,num3);
	return 0;
}

/*
gets 3 nums and ceacks if thay meat the condition
returns 1 or 0
*/
int areValidNumbers(int num1, int num2, int num3)
{
	int ans = 0;
    if (num1%2==0||num2%2==0||num3%2==0&&num1%2!=0||num2%2!=0||num3%2!=0&&num1>50||num2>50||num3>50)
    {
        ans=1;
    }
	return ans;
}
