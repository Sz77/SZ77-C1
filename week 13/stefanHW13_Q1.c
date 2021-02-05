/*********************************
* Class: MAGSHIMIM C1			 *
* Week 12           			 *
* Class solution 2  			 *
**********************************/

#include <stdio.h>

#define ROWS 5
#define SEATS_IN_ROW 3

#define CHEAP_TICKET_PRICE 25
#define NORMAL_TICKET_PRICE 35
#define VIP_TICKET_PRICE 50

#define NINETY_PERCENT_OF 0.9 *
#define SOLED -1

void printCinema(int cinema[][SEATS_IN_ROW], int rows);
int buyTicket(int cinema[][SEATS_IN_ROW]);
int takenSeats(int mat[][SEATS_IN_ROW], int rows);
void newPrice(int mat[][SEATS_IN_ROW], int rows);
void memberDiscount(int cinema[][SEATS_IN_ROW]);
enum options
{
	PrintCinemaHall = 1,
	BuyATicket,
	taken,
	discount,
	setPrice,
	leave
} option;
int main(void)
{
	int temp = 0;
	int cinema[ROWS][SEATS_IN_ROW] = {{CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, VIP_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE, NORMAL_TICKET_PRICE},
									  {CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE, CHEAP_TICKET_PRICE}};
	//main loop (input and calling the funcs)
	do
	{
		printf("\n Welcome to MagshiCinema\nSelect an option:\n1 - Print cinema hall\n2 - Buy a ticket\n3 - Print number of taken seats\n4 - Make a seat discount\n5 - Set a new price for all seats\n6 - Exit\n");
		scanf("%d", &option);
		getchar(); //buffer cleaner
		switch (option)
		{
		case (PrintCinemaHall):
			printCinema(cinema, ROWS);
			break;
		case (BuyATicket):
			temp = buyTicket(cinema);
			(temp == 0) ? printf("You got the seat!\n") : printf("Seat taken!\n");
			break;
		case (taken):
			temp = takenSeats(cinema, ROWS);
			printf("%d taken seats\n", temp);
			break;
		case (discount):
			memberDiscount(cinema);
			break;
		case (setPrice):
			newPrice(cinema, ROWS);
			break;
		case leave:
			return 0;
		}
	} while (!(option <= PrintCinemaHall && option >= setPrice));
}

/**
Print a cinema hall ticket prices
Input: 	hall, and number of rows
Output: None
*/
void printCinema(int mat[][SEATS_IN_ROW], int rows)
{
	int row = 0;
	int col = 0;
	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < SEATS_IN_ROW; col++)
		{
			printf("%d  ", mat[row][col]);
		}
		printf("\n");
	}
	printf("\n");
}
/*
this func changes the sit the user wants to -1 (if the sit is not -1 all ready)
input : the array (int)
output: int (i if its a new seat 0 if not)
*/
int buyTicket(int cinema[][SEATS_IN_ROW])
{
	int row = 0;
	int col = 0;
	int isNewSale = 0;
	printf("Which row (0-4)?   ");
	scanf("%d", &row);
	getchar(); //buffer cleaner
	printf("Which seat (0-2)?  ");
	scanf("%d", &col);
	getchar(); //buffer cleaner
	if (cinema[row][col] != SOLED)
	{
		cinema[row][col] = SOLED;
		isNewSale = 1;
	}
	return (isNewSale);
}
/*
this func chacks how much taken seats we have
input the array and the amount of rows
output the number of taken seats
*/
int takenSeats(int mat[][SEATS_IN_ROW], int rows)
{
	int row = 0;
	int col = 0;
	int counter = 0;
	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < SEATS_IN_ROW; col++)
		{
			if (mat[row][col] == SOLED)
			{
				counter++;
			}
		}
	}
	return (counter);
}
/*
takes 10 percent of a sit prise
input: the array 
output : none
*/
void memberDiscount(int cinema[][SEATS_IN_ROW])
{
	int row = 0;
	int col = 0;
	printf("Which row (0-4)?   ");
	scanf("%d", &row);
	getchar(); //buffer cleaner
	printf("Which seat (0-2)?  ");
	scanf("%d", &col);
	getchar(); //buffer cleaner
	if (cinema[row][col] != SOLED)
	{
		cinema[row][col] = NINETY_PERCENT_OF cinema[row][col];
	}
}
/*
the function sets up a new price
input: the array and the amount of rows
output : none
*/
void newPrice(int mat[][SEATS_IN_ROW], int rows)
{
	int row = 0;
	int col = 0;
	int newPrice = 0;
	printf("enter the new price     ");
	scanf("%d", &newPrice);
	getchar(); //buffer cleaner
	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < SEATS_IN_ROW; col++)
		{
			if (mat[row][col] != SOLED)
			{
				mat[row][col] = newPrice;
			}
		}
	}
}