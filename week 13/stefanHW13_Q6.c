#include <stdio.h>
#include <string.h>
#define SIZE 20
int main ()
{
    char drowing[SIZE][SIZE]={0};
    int i=0, j=0;
    printf ("enter your drowing(20 by 20 chars)\n");
    for (i=0; i<SIZE;i++)
    {
        fgets(drowing[i],SIZE,stdin);
    }
    printf("\n\n\nthe drowing\n\n\n");
    for (i=0; i<SIZE; i++)
    {
        for (j=0; j<strlen(drowing[i]); j++)
        {
            printf("%c",drowing[i][j]);
        }
    }
    return 0;
}