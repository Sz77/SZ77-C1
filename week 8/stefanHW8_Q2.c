
#include <stdio.h>
#include <math.h>
void printSequence(int firstElemnt, int ratio ,int numOfElements);
int main()
{
    //creating veribels
    int firstElemnt =0, ratio=0, numOfElements=0;
    //input
    printf("enter the first elemnt\n");
    scanf("%d",&firstElemnt);
    getchar();//buffer cleanr
    // second input 
    printf("enter the ratio\n");
    scanf("%d",&ratio);
    getchar();//buffer cleanr
    //third input
    printf("enter the num of elements\n");
    scanf("%d",&numOfElements);
    getchar();//buffer cleanr
    //function calling
    printSequence(firstElemnt,ratio,numOfElements);
    
}
/*
gets the first elemnt the ratio and the num of elements
and prints it using afor loop
*/
void printSequence(int firstElemnt, int ratio ,int numOfElements)
{
    for(int i =0; i <numOfElements; i++)
    {
        int output = (firstElemnt*pow(ratio,i));
        printf("%d  ",output);
    }
}