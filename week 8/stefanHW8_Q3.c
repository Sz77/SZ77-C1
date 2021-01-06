
#include <stdio.h>
#include <math.h>
void distanceBetweenPoints(int firstX, int firstY, int secondX, int secondY);
void hypo(int hight, int side);
void circleAreaAndPerimeter(int radius);
void areaOfRect(int hight, int side);
void areaOfSquare(int side);
int main()
{
    // creating veribels
    int option=0;
    //main loop alows us to calculet util we want to exit
    do
    {
        //menu printing
        printf("welcome\n 1 - calc the distance between points\n 2 - calc the hypotenuse");
        printf("\n 3 - calc circle area and perimeter \n");
        printf(" 4 - calc the area of a rect\n 5 - calc the of a square \n 6 -exit\n");
        scanf("%d",&option);
        getchar();
        switch (option)
        {
            //veribels for saving for all the functins
            int firstNum =0;
            int secondNum =0;
            int thirdNum =0;
            int fourthNum =0;
            
            case 1:
                //input
                printf("first point\n");
                scanf("%d %d",&firstNum,&secondNum);
                getchar();//buffer cleaner
                //second input
                printf("second point\n");
                scanf("%d %d",&thirdNum,&fourthNum);
                getchar();//buffer cleaner
                //calling the calcultion
                distanceBetweenPoints(firstNum,secondNum,thirdNum,fourthNum);
                //resting the saving veribels
                firstNum=0;
                secondNum=0;
                thirdNum=0;
                fourthNum=0;
                break;
            case 2:
                //input
                printf("enter 2 sids of a triangle \n");
                scanf("%d %d",&firstNum,&secondNum);
                getchar();//buffer cleaner
                //calling the calcultion
                hypo(firstNum,secondNum);
                //resting the saving veribels
                firstNum=0;
                secondNum=0;
                break;
            case 3:
                printf("enter the radius\n");
                scanf("%d",&firstNum);
                getchar();//buffer cleaner
                //calling the calcultion
                circleAreaAndPerimeter(firstNum);
                //resting the saving veribels
                firstNum=0;
                break;
            case 4:
                printf("enter 2 sids of a rectangle \n");
                scanf("%d %d",&firstNum,&secondNum);
                getchar();//buffer cleaner
                //calling the calcultion
                areaOfRect(firstNum,secondNum);
                //resting the saving veribels
                firstNum=0;
                secondNum=0;
                break;
            case 5:
                printf("enter side of a square \n");
                scanf("%d",&firstNum);
                getchar();//buffer cleaner
                //calling the calcultion
                areaOfSquare(firstNum);
                //resting the saving veribels
                firstNum=0;
                break;
            case 6:
                printf("goodbye!\n");
                break;
        }
    }
    while(option!= 6);
    return 0;
}
/**
gets to points and finds the distace using Pythagorean theorem
prints the distance
*/
void distanceBetweenPoints(int firstX, int firstY, int secondX, int secondY)
{
   float dis = sqrt(pow(secondX - firstX, 2) + pow(secondY - firstY, 2));
   printf("%.2f\n", dis);
   return;
}
/*
gets an hight and side
and calls distanceBetweenPoints 0,hight and 0,side
*/
void hypo(int hight, int side)
{
    distanceBetweenPoints(0,0,side,hight);
}
/*
gets a radius
and prints the perimeter and the area
*/
void circleAreaAndPerimeter(int radius)
{
    printf("perimeter %.2f\n",(2*radius*3.14));
    printf("area %.2f\n",(3.14*pow(radius,2)));
}
/*
gets an hight and a side 
prints the multiplication of them
*/
void areaOfRect(int hight, int side)
{
    printf("area: %.d\n",hight*side);
}
/*
gets a side of square 
and calls areaOfRect with side,side
*/
void areaOfSquare(int side)
{
    areaOfRect(side,side);
}