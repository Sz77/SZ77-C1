#include <stdio.h>
#include <string.h>
#define SIZE 100
#define FROM_UPER_CASE 32
#define THE_OPESIT_PLASE string[len - i - 1]
int main()
{
    char string[SIZE] = {0};
    int i, len, flag = 0;
    //input
    printf("Enter a string to check palindrome:");
    fgets(string, SIZE, stdin);
    string[strcspn(string, "\n")] = 0;
    //calculting the len
    len = (strlen(string));
    //deleting spaces
     for (i = 0; i < len; i++)
    {
        do
        {
            if (string[i] == ' ')
            {
                string[i] = string[i+1];
                for (int j = i+1; j < len; j++)
                {
                    string[j] = string[j+1];
                }
            }
        }
        while(string[i] == ' ');
    }
    //makeing evrything lower case
    for (i = 0; i < len; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = (string[i] + FROM_UPER_CASE);
        }
    }
    //calculting the new len
    len = (strlen(string));
    //palindrome chack
    for (i = 0; i < len; i++)
    {

        if (string[i] != THE_OPESIT_PLASE)
        {
            flag = 1;
            break;
        }
    }
    //printing corctt masegge
    if (flag)
    {
        printf("no");
    }
    else
    {
        printf("Yes");
    }
    return 0;
    
}