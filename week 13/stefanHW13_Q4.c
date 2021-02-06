#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 50
#define NUM_OF_LETTERS 26
#define MAX_WORD 10
void input(char words[][MAX_LEN], int numOfWords);
void output(int isPangram);
int chackInput(char words[][MAX_LEN], int numOfWords);
int chackCounter(int counters[]);
int main ()
{
    char words[MAX_WORD][MAX_LEN]={0};
    input(words, MAX_WORD);   
    return 0;
}
/*
this func gets the words from the user
input: the array and the number of words
output : none
*/
void input(char words[][MAX_LEN], int numOfWords)
{
    int i = 0,flag=0;;
    printf("enter 10 words:\n");
    for (i = 0; i < numOfWords; i++)
    {
        fgets(words[i], MAX_LEN, stdin);
        words[i][strcspn(words[i], "\n")] = 0;
        //calls the chack input func and if th fuc is true kills the loop
        if(chackInput(words,numOfWords) == 1)
        {
            flag=1;
            break;
        }
    }
    //calls the output
    output(flag);
}
/*
this func checks if the input has all the letters
input: the array of words and numOfWords
output: 1 if the input has all the letters 0 if not
*/
int chackInput(char words[][MAX_LEN], int numOfWords)
{
    int counters[NUM_OF_LETTERS] = {0},i=0,j=0,flag=0;
    for (i = 0; i <MAX_WORD;i++)
    {
        for (j = 0; j <strlen(words[i]); j++)
        {
            counters[words[i][j]-'a'] ++;
        }
        //chaking the counters
        if(chackCounter(counters)==1)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
/*
this fanc chaks the counters
input the counters
output true if the counters has all the letters
*/
int chackCounter(int counters[])
{
    int flag= 0 , temp=0;;
    int i =0;
    for (i = 0; i <NUM_OF_LETTERS;i++)
    {
        if (counters[i] > 0)
        {
            temp++;
        }
    }
    if (temp== NUM_OF_LETTERS )
    {
        flag=1;
    }
    return flag;
}
/*
this func prints the masege
input: int is pangram
output :none
*/
void output(int isPangram)
{
    printf("it's a Pangram ?\n");
    if (isPangram ==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}


