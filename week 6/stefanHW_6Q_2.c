#include <stdio.h>

int main(void)
{
    //creating vers 
	int num = 0;
	int output = 0;
	const int MIN_NUM=0;
	//the first loop runs the seconde if neaded again
	// the seconde loop calculets the Factorial
	do{
    	do
    	{
            printf("Please enter number bigger then 0:\n ");
            scanf("%d", &num);
            getchar();
            num<=MIN_NUM ? printf("Invalid input\n") : num;
       }
       while(num<=MIN_NUM);
      for(  int i = num-1; i>0;i--)
       {
           num*=i;
       
       }
       printf("the Factorial is %d\n",num);
       printf("click 'y' to try again any other key to exit\n");
	}
	while(getchar()=='y');
   

	return 0;
}
