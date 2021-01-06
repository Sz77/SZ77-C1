#include <stdio.h>
#define MAX_NUM 100
#define MIN_NUM 1

int main(void)
{
    // creating veribals
	int num = 0;
	// do block asks for a num 
    //and after thet while block that will work if num is incorect
	do
	{
        printf("Please enter number between 1-100:\n ");
        scanf("%d", &num);
   }
   while(num>MAX_NUM||num<MIN_NUM);

	return 0;
}
