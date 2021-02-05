
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
void selectDifficulty ();
void generatePass();
bool isValidInput(int input);
void CheckGuess(int input);
int input();
//global veribels
int pass=0;
bool win =false;
int guessesLeft=0;
enum difficulty {easy=1,moderate,hard,crazy} level;
int main()
{
    char again=' ';
    do
    {
        //resting evrything
        again=' ';
        int guess=0;
        bool valid=false;
        pass=0;
        win =false;
        printf("Welcome to ""MAGSHIMIM CODE-BREAKER""!!! \n");
        printf("A secret password was chosen to protect the credit card of Pancratius,\n");
        printf("the descendant of Antiochus.\n\n");
        printf("The rules are as follows:\n");
        printf("1. In each round you try to guess the secret password (4 distinct digits)\n");
        printf("2. After every guess you'll receive two hints about the password\n");
        printf("HITS:   The number of digits in your guess which were exactly right.\n");
        printf("MISSES: The number of digits in your guess which belongs to the password but were miss-placed.\n");
        printf("3. If you'll fail to guess the password after a certain number of rounds\n");
        printf("Pancratius will buy all the gifts for Hanukkah!!!\n");

            generatePass();
            selectDifficulty();
            //alwos gessing if we have gesses left and havent won
            do
            {//calling input until its valid
                do
                {
                    if(guessesLeft!=0)
                    {
                        guess=input();
                        valid = isValidInput(guess);
                    }
                }
                while(!valid);
                CheckGuess(guess);
            }
            while(guessesLeft!=0&&!win);
            //chacking if the user wants to do it agine
            if (!win)
            {
                printf("OOOOHHHH!!! Pancratius won and bought all of Hanukkah's gifts.\nNothing left for you...\nThe secret password was %d",pass);
            }
            do
            {
                printf("\nWould you like to play again? (y/n): ");
                again=getchar();
                getchar();//bufer clener
            }
            while(!((again == 'y')||(again == 'n')));
    }
    while(again == 'y');
    
    printf("Bye Bye!\nPress any key to continue . . .");
    getchar();//holding the program open
    return 0;
}
/*
this func used for imput to make the code cleaner
output: int the input for all the funcs
*/
int input()
{
    int input=0;;
    printf("Write your guess (only 1-6, no ENTER is needed)\n");
    if(level != crazy)
    {
    
    printf("%d guesses left\n",guessesLeft);
    }
    else
    {
        printf("CRAZY MODE!!!\n");
    }
    
    scanf("%d",&input);
    getchar();//buffer cleaner
    return input;
}
/*
this func is used for difficulty selection
input: void
output void
*/
void selectDifficulty()
{
    printf("Please choose the game level:\n1 - Easy (20 rounds)\n2 - Moderate (15 rounds)\n3 - Hard (10 rounds)\n4 - Crazy (random number of rounds 5-25)\n");
    do
    {
        printf(" Make a choice:");
        scanf("%d",&level);
        getchar();//bufer cleaner
    }
    while(level>crazy||level<easy);//chack if valid diff
    //setting up the gesses the user is allwod
    switch (level)
    {
        case (easy):
            guessesLeft =20;
            break;
        case (moderate):
            guessesLeft =15;
            break;
        case (hard):
            guessesLeft =10;
            break;
        case (crazy):
            guessesLeft =rand()%(25-5+1)+1;//arandom num from 5-25
            break;
    }
}
/*this func gnerate the password
input void
output void
*/
void generatePass()
{
    //vers
    int num1=0,num2=0,num3=0,num4=0;
    //the seed for the rand func
    srand(time(NULL));
    do
    {
        num1 = rand()%6+1;//the first diget 1-6
        num2 = rand()%6+1;//the second diget 1-6
        num3 = rand()%6+1;//the third diget 1-6
        num4 = rand()%6+1;//the fourth diget 1-6
    }
    //chacking if pass is leagal if not it will ganrate it agine
    while(num1==num2||num1==num3||num2==num3||num1==num4||num2==num4||num3==num4);
    //making the pass 1 ver insted of 4
    pass =num1*1000+num2*100+num3*10+num4;
}
/*
this func chackes if users imput is posibel
input: int imput from the input func
output bool true if posibel
*/
bool isValidInput(int input)
{   
    //spiting the imput to 4 digets
    int inputFirstDig =input%10,inputSecondDig =(input/10)%10,inputThirdDig =(input/100)%10,inputFourthDig =(input/1000)%10;
    bool valid =true;
    //chacks if the imput is smaller then the smallest ligal value or if biger than the biggest
    if(input>6666||input<1111)
    {
        valid = false;
    }
    //chacks if a diget is biger then the max value per diget
    else if((inputFirstDig>6||inputSecondDig>6||inputThirdDig>6||inputFourthDig>6))
    {
        valid = false;
    }
    //chacks id adiget is s,aller then the min value per diget
    else if((inputFirstDig<1||inputSecondDig<1||inputThirdDig<1||inputFourthDig<1))
    {
        valid =false;
    }
    //if the digets are rpiting (bonus)
    else if(inputFirstDig==inputSecondDig||inputFirstDig==inputThirdDig||inputSecondDig==inputThirdDig||inputFirstDig==inputFourthDig||inputSecondDig==inputFourthDig||inputThirdDig==inputFourthDig)
    {
        valid= false;
    }
   
    return valid;
}
/*
chacks if the guess is corect and prints the num og misses and hits
input: int input from the user
output : void
*/
void CheckGuess(int input)
{
    //if the guess made it here its coants as aguess
    guessesLeft--;
    int hits=0 , misses=0;
// goes over evry diget in the input
    for( int i =0; i < 4 ; i++)
    {
        // the corent diget
       int inputTamp=((input/(int)pow(10,i))%10);
       //goes over evry diget in the password to comper it with the input
       for(int j =0 ;j<4;j++)
       {
           //chacks hits both nums in the same postion
           if(i==j&&inputTamp==((pass/(int)pow(10,j))%10))
           {
               hits++;
           }
           //chacs misses both nums are in diff position
           else if (i!=j&&inputTamp==((pass/(int)pow(10,j))%10))
           {
               misses++;
           }
       }
       
    }
//prnting the winig messeg if the guess is corect
    if ( hits == 4)
    {
        printf("4 HITS YOU WON!!!\n");
        win= true;
    }
    // prints hits and misses
    else
    {
        printf("You got    %d HITS    %d MISSES.\n",hits,misses);
    }

}
