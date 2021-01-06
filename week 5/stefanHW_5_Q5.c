#include <stdio.h>
#include <stdbool.h>
#define MONTHS_IN_YEAR 12
int
main ()
{
    // creating vers
    int day = 0, month = 0, year = 0,daysInAmonth=0;
    const int YEAR_LIMIT = 2017;
    bool leapYear = false;
	// date input
    printf("your date in this format dd.mm.yyyy\n");
    scanf (" %2d.	%2d.%4d", &day, &month, &year);
	// leapYear flag
    leapYear =  (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0);
	// changing the num of days in the month
    switch (month)
    {
        case 1 :
            daysInAmonth = 31;
        break;
        case 2 :
            if(leapYear==true)
            {
                daysInAmonth = 29;
            }
            else
            {
                daysInAmonth =28;
            }
        break;
        case 3 :
            daysInAmonth = 31;
        break;
        case 4 :
            daysInAmonth = 30;
        break;
        case 5 :
            daysInAmonth = 31;
        break;
        case 6 :
            daysInAmonth = 30;
        break;
        case 7 :
          daysInAmonth = 31;
        break;
        case 8 :
            daysInAmonth = 31;
        break;
        case 9 :
         daysInAmonth = 30;
        break;
        case 10 :
            daysInAmonth = 31;
        break;
        case 11 :
            daysInAmonth = 30;
        break;
        case 12 :
            daysInAmonth = 31;
        break;
        default :
            printf("Invalid month\n" );
            return(0);
    } 
    //checking if the day is valid
    if(day < 1 ||day>daysInAmonth){
        printf("Invalid day\n");
        return(0);
    }
    //changing if the year is valid
    if(year < 1 ||year>2017)
    {
        printf("Invalid year\n");
        return(0);
    }
    //calculting tommorow's date
    day++;
    if(day>daysInAmonth&&month<MONTHS_IN_YEAR){
        day=1;
        month++;
    }
    else if(day>daysInAmonth&&month==MONTHS_IN_YEAR)
    {
        day=1;
        month=1;
        year++;
    }
	//printing tommorow's date
    printf("Tommorow's date is: :%2d.%2d.%4d",day,month,year);
    return(0);
}
