/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //crateing vers
    int option =0 ;
    float firstNum =0;
    float secondNum=0;
    //first input
    printf("the first num is:\n");
    scanf("%f",&firstNum);
    //buffer cleaner
    getchar();
    // second input
    printf("the second num is:\n");
    scanf("%f",&secondNum);
    //buffer cleaner
    getchar();
    //printing the menu 
    printf("1. adding the firstNum to the secondNum\n2. subtracting the second num from the first num \n3. multiplying the first num by the second num\n4. dividing the first num by the second num\n\n Write the num of your option\n");
    // option chosing
    scanf("%d",&option);
    switch (option){
        case 1 :
        printf("the firstNum+the secondNum=%.2f",firstNum+secondNum);
        break;
        case 2 :
        printf("the firstNum-the secondNum=%.2f",firstNum-secondNum);
        break;
        case 3 : 
        printf("the firstNum*secondNum=%.2f",firstNum*secondNum);
        break;
        case 4 :
        if (secondNum != 0)
        {
            printf("the firstNum/secondNum=%.2f",firstNum/secondNum);
        }
        else
        {
            printf("why you trying to dived by 0");
        }
        break;
        default :
        printf("%d is not valide option",option);
    }
}

