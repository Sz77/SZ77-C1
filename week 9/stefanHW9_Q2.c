#include <stdio.h>

enum difficulyLevel{lolGetGood=1,Easy, Medium, Hard,lolYouGotGood};

int main()
{
    enum difficulyLevel level;
    
    printf("Choose a difficulty level:\n1.lolGetGood\n2.Easy\n3.Medium\n4.Hard\n5.lolYouGotGood\n");
    scanf("%d", &level);
    
    return 0;
}
