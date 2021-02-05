#include <stdio.h>

int userChoice ();
void printJoke (int choice);
int main(void)
{
    // a Welcome masege
    printf("Welcome to the Comedy Store!\n what joke would you like \n");
    // calling the input function
    userChoice();
    
    return 0;
}
/*
this function is used by the user to choose the type of joke they want
input nothing
output the choice (int)
*/
int userChoice(void)
{   
    // veribel set up
    int choice=0;
    //input
    printf("Programming joke - 0\nKnock-knock joke - 1\nWordplay joke - 2\n");
    scanf("%d",&choice);
    getchar();//buffer cleaner
    //calling the function with the user Choice
    printJoke(choice);
/*
this function prints the joke bastard on  the user input
input choice (int)
output nothing
*/
}
void printJoke(int choice)
{
    printf("the joke you wanted \n\n");
    switch (choice)
    {
        
       
        case 0:
            printf("Programmer: \"Honey, you're my number one...\"\nWife: \"Oh, really!? Well who's your number zero, you cheating bastard!?\"");
            break;
        case 1:
            printf("Knock knock. Who's there? \nA little old lady. \nA little old lady who? \nDang! All this time, I had no idea you could yodel.");
            break;
        case 2:
            printf("Jokes about teachers on summer break are not funny.\n\n They're just not working!");
            break;
        default :
            printf("your ability to read apparently");
    }
}