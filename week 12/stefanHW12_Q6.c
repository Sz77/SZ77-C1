#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50

/*
this code not working and i have no idea why
(I realy would like what is the problem)

*/
int getNum(char str[],int index ,int lastInedx);
int main()
{
    char str[SIZE]={0};
    int len =0, index =0 ,a=0,b=0,c=0;
    int lastInedx =0;
    printf("enter the func (ax^2+bx+c=0 :");
    fgets(str,SIZE,stdin);
    str[strcspn(str, "=")] = 0;
    len = strlen(str);
   
    lastInedx=index;
    index=strcspn(str, "x");
    printf("\n%d\n",getNum(str,index,lastInedx));
    
     for(int i =0; i<len;i++)
    {
        if(str[i]=='^')
        {
            str[i]=' ';
            str[i+1]=' ';
        }
        puts(str);
    }
    printf("\n%d\n",atoi("                    +5"));
    lastInedx=index;
    index=strcspn(str, "x");
    
    printf("\n%d\n",getNum(str,index,lastInedx));
    
    lastInedx=index;
    index=strcspn(str, "\0");
    printf("\n%d\n",getNum(str,index,lastInedx));
    
    return 0;
}
/*
this func should
return the the numbers but noo
input:the string the index and the kast index
output:shude be the num

*/


int getNum(char str[],int index ,int lastInedx)
{
    int num =0, i =0;
    char temp[SIZE]={0};
    for(int i = lastInedx;i <= index;i++)
    {   if((str[i]<='9'&&str[i]>='0')||str[i]=='-'||str[i]== '+')
        {
            temp[i-lastInedx]=str[i];
        }
        str[i]=' ';
        puts(str);
        
        
    }
    num=atoi(temp);
    return num;
}