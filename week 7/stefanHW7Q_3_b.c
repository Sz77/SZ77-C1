/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    it was painfull is there a better way to do it
    */
    
    // creating veribels
    int input =0;
    int tamp =0;
    int sum = 0;
    bool numOne = false;
    bool numTwo = false;
    bool numThree =false;
    bool numFour = false;
    bool numFive = false;
    bool numSix = false;
    bool numSeven = false;
    bool numEight = false;
    bool numNine =false;
    //input
    printf("enter a num");
    scanf("%d",&input);
    // goes over evrey digit in the num
    for (int i =input ; i!= 0 ; i/=10 )
    {
        // make sure the programs adds evrey gigit to the sum ones
        tamp=i%10;
        switch (tamp)
        {
            case 1:
            if(numOne)
            {
                continue;
            }
            else 
            {
                numOne=true;
            }
            break;
            case 2:
            if(numTwo)
            {
                continue;
            }
            else 
            {
                numTwo=true;
            }
            break;
            case 3:
            if(numThree)
            {
                continue;
            }
            else 
            {
                numThree=true;
            }
            break;
            case 4:
            if(numFour)
            {
                continue;
            }
            else 
            {
                numFour=true;
            }
            break;
            case 5:
            if(numFive)
            {
                continue;
            }
            else 
            {
                numFive=true;
            }
            break;
            case 6:
            if(numSix)
            {
                continue;
            }
            else 
            {
                numSix=true;
            }
            break;
            case 7:
            if(numSeven)
            {
                continue;
            }
            else 
            {
                numSeven=true;
            }
            break;
            case 8:
            if(numEight)
            {
                continue;
            }
            else 
            {
                numEight=true;
            }
            break;
            case 9:
            if(numNine)
            {
                continue;
            }
            else 
            {
                numNine=true;
            }
            break;
            
        }
        //adding to the sum
        sum+= tamp;

    }
    // printing
     printf("the sum of the digits: %d\n",sum);

    return 0;
}
