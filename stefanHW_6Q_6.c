
#include <stdio.h>

int main()
{
    int num =0;
   
    //input
    do
    {
        printf("entar a positive num\n");
        scanf("%d",&num);
        num<0 ? printf("invalid input\n"):num;
    }
    while(num<0);
    printf("the oririgenl num %d\n",num);
    //removing 0s form the back of the num
    while(num%10==0)
        {
            num=num/10;
        }
    printf("after reversing   :");
    do
    {
        
        printf("%d",(num%10));
        num=num/10;
    }
    while(num>0);
    

    return 0;
}