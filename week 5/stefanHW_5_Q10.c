#include <stdio.h>

int main()
{
    //crateing vers
    int num =0 ;
    //input
    printf("input your num\n");
    scanf("%d",&num);
    //absolute value caculation
	printf("the absolute value is:%d",(num<0 ? num*=-1 : num));
}	