#include <stdio.h>
#define SIZE 5
void input(int arr[]);
void reverseArr(int arr[], int reversedArr[]);
int main()
{
    int arr[SIZE]={0},reversedArr[SIZE]={0};
    input(arr);
    reverseArr(arr, reversedArr);
    printf("the reversed Array :");
    for(int i =0;i<SIZE;i++)
    {
        printf("%d ",reversedArr[i]);
    }
    return(0);
}
/*
more organized input prints amasege and scans nums
input: the array
ouput: none
*/
void input(int arr[])
{
    printf("enter 5 numbers to array :");
    for(int i =0; i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
}
/*
gets the oringnl array and flips givse the vaules to diffrent array in reverse order
input the origenl array and the second array 
output :none
*/
void reverseArr(int arr[], int reversedArr[])
{
    for(int i = 0;i<SIZE;i++)
    {
        reversedArr[i]=arr[SIZE-(i+1)];
    }
}