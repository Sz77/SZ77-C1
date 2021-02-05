#include <stdio.h>
#define ROWS 10
#define COLS 10

void fill(int arr[][COLS] , int rows);
void printArr(int arr[][COLS] , int rows);

int main()
{
    int arr [ROWS][COLS] ={0};
    fill(arr,ROWS);
    return 0;
}
/*
this func changes the array and calls the print function.
input: the array and the number of rows
output : none
*/
void fill(int arr[][COLS] , int rows)
{
    int i =0, j =0;
    for (i = 0; i <rows; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            arr[i][j] =(1+i)*(1+j);
        }
    }
    printArr(arr, rows);
}
/*
this func prints the array
input : the array and the number of rows
output : none
*/
void printArr(int arr[][COLS] , int rows)
{
    int i =0, j =0;
     for (i = 0; i <rows; i++)
    {
        for (j = 0; j < COLS; j++)
        {
        printf("%4d",(arr[i][j]));
        }
        printf("\n");
    }
}