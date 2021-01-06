#include<stdio.h>
int main()
{   
    int rows=0;
    do
    {
        printf("enter the num of rows(5-20\n");
        scanf("%d",&rows);
    }
    while(!(rows>=5&&rows<=20));   
        // Outer loop represents row
    for(int i=1;i<=rows;i++)
    {
    // inner loop represents column
        for(int j=1;j<=i;j++)
            {
            printf("* "); // star
            }
        printf("\n"); // new line
    }
    
    

  return 0;
}