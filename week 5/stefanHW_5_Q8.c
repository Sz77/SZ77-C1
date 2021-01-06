

#include <stdio.h>

int main()
{   
    //vers
    int side =0;
    //input
    printf("hey input a num between 1-6\n");
    scanf("%d",&side);
    // changink the print value
    switch (side){
        case 1 :
            printf("the the side value is: one\n");
        break;
        case 2 :
            printf("the the side value is: two\n");
        break;
        case 3 :
            printf("the the side value is: three\n");
        break;
        case 4 :
            printf("the the side value is: four\n");
        break;
        case 5 :
            printf("the the side value is: five\n");
        break;
        case 6 :
            printf("the the side value is: six\n");
        break;
        default :
            printf("Invalid value\n");
    }
    return 0;
}
