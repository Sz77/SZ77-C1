#include <stdio.h>
#include <stdbool.h>

enum days{sun=1, mon, tues, wed, thurs, fri, sat}day;
enum months{jan=1, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec}month;

bool chackFirstImput(int monthToCheck, int dayToChack);
bool chackSecondImput(int firstDayOfTheMonth);
void input();
void output(int day, int dayToChack,int monthToCheck);
void calcDay(int monthToCheck, int firstDayOfTheMonth, int dayToChack);

int main()
{
    //prints a Welcome
    printf("Hello! Welcome to my day calculator!\n");
    //calls the input func
    input();
    return (0);
}
/*
the func used for more organised input
it calls the 2 funcs the chack the input ( chackFirstImput and chackSecondImput)
*/
void input()
{
    //setting up the veribels
    int monthToCheck = 0, firstDayOfTheMonth = 0, dayToChack = 0;
    bool valid = true;
    //first input
    do
    {
        printf("Enter month to check: (1-12) ");
        scanf("%d", &monthToCheck);
        printf("Enter day to check: ");
        scanf("%d", &dayToChack);
        //calling to see if the day to check and month to check are posibel
        valid = chackFirstImput(monthToCheck, dayToChack);
        
        if(!valid)
        {
            printf("Invalid Input! try again..\n");
        }
    }
    while(!valid);
    //second imput 
    do
    {
        printf("Enter the weekday of the first day of the month: (1-7) ");
        scanf("%d", &firstDayOfTheMonth);
       // chacks if the first day of the month is avalid date
        valid = chackSecondImput(firstDayOfTheMonth);
        
        if(!valid)
        {
            printf("Invalid Input! try again..\n");
        }
    }
    while(!valid);
    // if evrything is valid we call the calcultion
    calcDay(monthToCheck,firstDayOfTheMonth,dayToChack);
}
/*
the fanc chacks if the day we need to chack and the month are posibel
gets the month we need to to check and the day
return a bool (true if valid)
*/
bool chackFirstImput(int monthToCheck, int dayToChack)
{
    bool isValid = true;
    int daysInMonth = 0;
    month = monthToCheck;

    switch(month)
    {
        case feb:
            daysInMonth = 28;
            break;
        case apr:
        case jun:
        case sept:
        case nov:
            daysInMonth = 30;
            break;
        case jan: 
        case mar:
        case may:
        case jul:
        case aug:
        case oct:
        case dec:   
            daysInMonth = 31;
            break;
        default :
            isValid = false;
            break;
    }
    if(dayToChack > daysInMonth || dayToChack < 1)
    {
        isValid = false;
    }
    return isValid;
}
/*
chacks if the first day of the month is aday of the week 
gets the first day of the month
return a bool (true if valid)
*/
bool chackSecondImput(int firstDayOfTheMonth)
{
    bool isValid = true;
    day = firstDayOfTheMonth;
    if(day < sun || day > sat)
        {
            isValid = false;
        }
    return isValid;
}
/*
calculits the day 
gets the month , the first day of the month and the day we want
calls the output func
*/
void calcDay(int monthToCheck, int firstDayOfTheMonth, int dayToChack)
{
    int dayOfTheWeek = 0;
    dayToChack--;
    dayOfTheWeek = (firstDayOfTheMonth + (dayToChack % 7)) % 7;
    output(dayOfTheWeek, dayToChack , monthToCheck);
}
/*
print the ans 
gets the day from calcDay and the date we want to chack
*/
void output(int day, int dayToChack,int monthToCheck)
{
    printf("The %d.%d will be a ", dayToChack, monthToCheck);
    switch(day)
    {
        case sun:
            printf("Sunday");
            break;
        case mon:
            printf("Monday");
            break;
        case tues:
            printf("Tuesday");
            break;
        case wed:
            printf("Wednesday");
            break;
        case thurs:
            printf("Thursday");
            break;
        case fri:
            printf("Friday");
            break;
        case 0:
            printf("Saturday");
            break;
    }
}