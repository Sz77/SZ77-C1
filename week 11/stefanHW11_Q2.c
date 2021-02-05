#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OF_FACES 6

int main()
{
    //seed setup
    srand(time(NULL));

    const int NUM_OF_ROLLS= 10000;
    int counters[NUM_OF_FACES]={0};
    for(int i =0;i<NUM_OF_ROLLS;i++)
    {
        //rolling rand num between 1- the num of faces
        int randNum = rand()%NUM_OF_FACES+1;
        //adding to the counter
        counters[randNum-1]++; 
    }
    //printing
    for(int i =0;i<NUM_OF_FACES;i++)
    {
        printf("the num of %d`s is :%d\n",i+1,counters[i]);
    }
    return 0;
}