#include <stdio.h>

int main()
{
    //creating veribels
    int currentMax =0;
    int lastMax = 0;
    int input =0;
    do
    {
        //input
        printf("Enter number (-999 to stop):  ");
        scanf("%d",&input);
        getchar();//bufer clener
        //chacking if the input is bigger then the currentMax
        if(input>currentMax&&lastMax<=currentMax)
        {
            lastMax = currentMax;
            currentMax = input;
        }
        //if the currentMax =0 buth maxes are input
        else if(currentMax==0)
        {
            lastMax=input;
            currentMax=input;
        }
        //helps with negativ nums
        else if(lastMax>currentMax)
        {
            currentMax =lastMax; 
        }
        //if the inputs arent in order
        else if (lastMax<input)
        {
           lastMax =input;
        }
        
    }
    while(input != -999);
    //printing
    printf("first max: %d second max : %d",currentMax,lastMax);
    return 0;
}
