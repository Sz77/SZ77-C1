#include <stdio.h>

int main()
{
    // creating veribels
    int firstNum=0;
    int secondNum=0;
    //input
    printf("enter the first num ");
    scanf("%d",&firstNum);
    getchar();//buffer cleaner
    printf("enter the second num ");
    scanf("%d",&secondNum);
    getchar();// buffer cleaner
    //finding the common denominator 
    for(int i = 1; i<=firstNum*secondNum; i++ )
    {
        (i%firstNum==0&&i%secondNum==0)?printf("the result is :  %d ",i):i;
    } 
}
