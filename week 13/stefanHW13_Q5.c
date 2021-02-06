#include <stdio.h>

#define COURSES 3
#define EXERCISEES 11 
int main()
{
    /*  
the origenl array
  80     60     70      0      0      0      0      0      0      0      0   
   0      0      0      0      0      0      0      0      0      0      0   
   0      0      0      0      0      0      0      0      0      0      0  

   the problem with that is the fuct he put all the all the gread in the first corse  
*/



    int myGrades[COURSES][EXERCISEES]={80,60,70};
    int i =0 ,j=0;
    for (i = 0; i <COURSES; i++)
    {
        printf("enter th greads  ");
        scanf("%d",myGrades[i][0]);
    }
    for (i = 0; i < COURSES;i++)
    {
        for (j = 0; j < EXERCISEES; j++)
        {
            printf("%4d  ",myGrades[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
