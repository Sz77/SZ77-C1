#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
#define NUM_OF_LETTERS 26
int main()
{
// the array of all the letters is needed for printing
    const char letters[NUM_OF_LETTERS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0, len = 0, index = 0, counters[NUM_OF_LETTERS] = {0};
    char mostFrequent = ' ', lastMostFrequent = ' ', str[SIZE] = {0}, temp = ' ';
    int max = 0;
    int lastMax = 0;
    //input
    printf("enter the string : ");
    fgets(str, SIZE, stdin);
    str[strcspn(str, "\n")] = 0;
    
    //calculintig th len
    len = strlen(str);
    //count how many tims each letter appers
    for (i = 0; i < len; i++)
    {
        temp = str[i];
        counters[(int)temp - 'a']++;//the - a is to make sure its the index and not the ascii value
    }
    //findind the two most frequent letters
    for (i = 0; i < NUM_OF_LETTERS; i++)
    {
        if (max < counters[i])
        {
            lastMax = max;
            max = counters[i];
            lastMostFrequent = mostFrequent;
            mostFrequent = letters[i];
        }
        else if (lastMax < counters[i])
        {
            lastMax = counters[i];
            lastMostFrequent = letters[i];
        }
    }
    //swaps the two most frequent letters
    for (i = 0; i < NUM_OF_LETTERS; i++)
    {
        if (str[i] == mostFrequent)
        {
            str[i] = lastMostFrequent;
        }
        else if (str[i] == lastMostFrequent)
        {
            str[i] = mostFrequent;
        }
    }
    //printing
    printf("the most frequent is: %c and the second most frequnt is:%c\n",mostFrequent,lastMostFrequent);
    printf("and here is the new string\n");
    puts(str);
    return 0;
}