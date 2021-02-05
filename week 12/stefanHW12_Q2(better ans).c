
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
int main()
{   
    //this is the better sulotion i fuond 
    int num =0 ,len =0;
    char finalStr[SIZE]={0},temp[SIZE]={0};
    //input
    printf("enter the num(int)");
    scanf("%d",&num);
    getchar();//bufer cleaner
    //adding + or -
    if(num>0)
    {
        finalStr[0]='+';
    }
    //canvorting int to string
    sprintf(temp, "%d", num);
    //the length of the string for copying
    len = strlen(temp);
    //addingthe num to the - or +
    strncat(finalStr,temp,len);
    //the final len
     len = strlen(finalStr);
    //printing
    printf("string %s length %d",finalStr,len);
    return 0;

    
}
