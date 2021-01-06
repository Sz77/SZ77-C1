#include <stdio.h>

int main(void)
{	//creating vers
    const int minAge = 16, maxAge = 18;
    int age = 0;
    //input
    printf("input an age:\n\n");
    scanf("%d", &age);
    //cleaning the buffer
	getchar(); 
    // checking if the kis should get aphone
    if (age >= minAge && age <= maxAge)
    {
        printf("Yay! your age is not between 16 and 18!\n");
        printf("You can have a phone!\n");
    }
    
    else
    {
        printf("Sorry, no phone for you...\n");
    }

    return(0);
}