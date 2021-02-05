#include <stdio.h>
#include <string.h>

#define NUM_OF_NAMES 10
#define MAX_LEN 50
void input(char names[][MAX_LEN], int numOfNames);
void printLongest(char names[][MAX_LEN], int numOfNames);
void printShorts(char names[][MAX_LEN], int numOfNames);
void printFirst(char names[][MAX_LEN], int numOfNames);
void printLast(char names[][MAX_LEN], int numOfNames);
int main()
{
    char names[NUM_OF_NAMES][MAX_LEN] = {0};
    input(names, NUM_OF_NAMES);
    
    printShorts(names, NUM_OF_NAMES);
    printLongest(names, NUM_OF_NAMES);
    printFirst(names, NUM_OF_NAMES);
    printLast(names, NUM_OF_NAMES);

    return 0;
}
/*
this func gets the names from the user
input: the array and the number of names
output : none
*/
void input(char names[][MAX_LEN], int numOfNames)
{
    int i = 0;
    printf("enter 10 names:\n");
    for (i = 0; i < numOfNames; i++)
    {
        fgets(names[i], MAX_LEN, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }
}
/*
this func prints the print longest name
input: the array and the number of names
output : none
*/
void printLongest(char names[][MAX_LEN], int numOfNames)
{
    int i = 0, max = strlen(names[i]), index = 0;
    for (i = 0; i < numOfNames; i++)
    {
        if (max < strlen(names[i]))
        {
            max = strlen(names[i]);
            index = i;
        }
    }
    printf("longest : ");
    puts(names[index]);
}
/*
this func prints the shorts name
input: the array and the number of names
output : none
*/
void printShorts(char names[][MAX_LEN], int numOfNames)
{
    int i = 0, min = strlen(names[i]), index = 0;
    for (i = 0; i < numOfNames; i++)
    {
        if (min > strlen(names[i]))
        {
            min = strlen(names[i]);
            index = i;
        }
    }
    printf("shorts : ");
    puts(names[index]);
}
/*
prints the name of the first by ascii
input: the array and the number of names
output : none
*/
void printFirst(char names[][MAX_LEN], int numOfNames)
{
    int i=0 , index=0;
    for (i = 0; i < numOfNames; i++)
    {
        if (strcmp(names[i],names[index])<0)
        {
            index =i;
        }
    }
    printf("first : ");
    puts((names[index]));
}
/*
prints the name of the last by ascii
input: the array and the number of names
output : none
*/
void printLast(char names[][MAX_LEN], int numOfNames)
{
    int i=0 , index=0;
    for (i = 0; i < numOfNames; i++)
    {
        if (strcmp(names[i],names[index])>0)
        {
            index =i;
        }
    }
    printf("last : ");
    puts((names[index]));   
}