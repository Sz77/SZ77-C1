#include <stdio.h>
#include <math.h>
#include <stdbool.h>
float distanceBetweenPoints(int firstX, int firstY, int secondX, int secondY);
float hypo(int hight, int side);
float circleAreaAndPerimeter(int radius, bool isArea);
int areaOfRect(int hight, int side);
int areaOfSquare(int side);

enum calcOption { distance = 1, hypotenuse, circle, rectArea, squareArea, leave };
int main()
{
    // creating veribels
    enum calcOption option = 0;
    //main loop alows us to calculet util we want to exit
    do
    {
        //menu printing
        printf("welcome\n 1 - calc the distance between points\n 2 - calc the hypotenuse");
        printf("\n 3 - calc circle area and perimeter \n");
        printf(" 4 - calc the area of a rect\n 5 - calc the of a square \n 6 -exit\n");
        scanf("%d", &option);
        getchar();
        switch (option)
        {
            //veribels for saving for all the functins
            int firstNum = 0;
            int secondNum = 0;
            int thirdNum = 0;
            int fourthNum = 0;

        case (distance):
            //input
            printf("first point\n");
            scanf("%d %d", &firstNum, &secondNum);
            getchar();//buffer cleaner
            //second input
            printf("second point\n");
            scanf("%d %d", &thirdNum, &fourthNum);
            getchar();//buffer cleaner
            //calling the calcultion
            printf("the dis is %.2f", distanceBetweenPoints(firstNum, secondNum, thirdNum, fourthNum));
            //resting the saving veribels
            firstNum = 0;
            secondNum = 0;
            thirdNum = 0;
            fourthNum = 0;
            break;
        case (hypotenuse):
            //input
            printf("enter 2 sids of a triangle \n");
            scanf("%d %d", &firstNum, &secondNum);
            getchar();//buffer cleaner
            //calling the calcultion
            printf("the hypotenuse is %.2f\n", hypo(firstNum, secondNum));
            //resting the saving veribels
            firstNum = 0;
            secondNum = 0;
            break;
        case (circle):
            printf("enter the radius\n");
            scanf("%d", &firstNum);
            getchar();//buffer cleaner
            //calling the calcultion

            printf("perimeter %.2f\n", circleAreaAndPerimeter(firstNum, false));
            printf("area %.2f\n", circleAreaAndPerimeter(firstNum, true));
            //resting the saving veribels
            firstNum = 0;
            break;
        case (rectArea):
            printf("enter 2 sids of a rectangle \n");
            scanf("%d %d", &firstNum, &secondNum);
            getchar();//buffer cleaner
            //calling the calcultion
            printf("the ar is %d\n", areaOfRect(firstNum, secondNum));
            //resting the saving veribels
            firstNum = 0;
            secondNum = 0;
            break;
        case (squareArea):
            printf("enter side of a square \n");
            scanf("%d", &firstNum);
            getchar();//buffer cleaner
            //calling the calcultion
            printf("the area is %d\n", areaOfSquare(firstNum));
            //resting the saving veribels
            firstNum = 0;
            break;
        case leave:
            printf("goodbye!\n");
            break;
        }
    } while (option != leave);
    return 0;
}
/**
gets two points and finds the distance using the Pythagorean theorem
returns the distance
*/
float distanceBetweenPoints(int firstX, int firstY, int secondX, int secondY)
{
    float dis = sqrt(pow(secondX - firstX, 2) + pow(secondY - firstY, 2));
    return dis;
}
/*
gets a hight and side
and calls distanceBetweenPoints 0,hight and 0,side
radius the hypo
*/
float hypo(int hight, int side)
{
    float hypo = distanceBetweenPoints(0, 0, side, hight);
    return hypo;
}
/*
gets a radius and a bool saying if it should return the area
and returns the perimeter or the area

*/
float circleAreaAndPerimeter(int radius, bool isArea)
{
    float ans = 0;
    if (isArea)
    {
        ans = (3.14 * pow(radius, 2));
    }
    else
    {
        ans = (2 * radius * 3.14);
    }
    return ans;


}
/*
gets an hight and a side
returns the area
*/
int areaOfRect(int hight, int side)
{

    return hight * side;
}
/*
gets a side of the square
and calls areaOfRect with side, side
returns the area
*/
int areaOfSquare(int side)
{
    int area = 0;
    area = areaOfRect(side, side);
    return area;
}