

#include <stdio.h>

int main()
{
    //crateing vers
    int num =0 ;
    //input
    printf("input your num\n");
    scanf("%d",&num);
    //the absolute value
    if(num<0 ){
        num *= -1;
    }
    printf("the absolute value is %d",num);
}

