#include <stdio.h>
#include <stdlib.h>

#define NUM_GUESTS 200
#define FALSE 0
#define TRUE 1
#define ERROR -1
#define KIDS_MEAL_AGE 12

void quickSort(int guestAges[], int first, int last);
float averageAge(int guestAges[], int size);
int numOfKidsMeals(int guestAges[] ,int size);
int binarySearch(int guestAges[], int size, int x,int isIndex);
int findGuest(int guestAges[],int size,int ageToFind);
int findCouple(int guestAges[],int size,int ageToFind);
int maxAge(int guestAges[],int size);
int minAge(int guestAges []);




int main(void)
{
	// quickSort and binarySearch are deffntly over kill but why not
	int ageToFind=0;
	int couple =0;
	int guestAges[NUM_GUESTS] =
		{42, 108, 95, 101, 90, 5, 79, 79, 83, 105, 66, 66, 2, 28, 2, 12, 116, 63,
		 28, 37,
		 112, 85, 63, 34, 53, 23, 22, 117, 39, 96, 48, 7, 12, 19, 70, 113, 108, 20,
		 116,
		 55, 24, 52, 3, 94, 34, 105, 22, 32, 54, 29, 108, 45, 23, 118, 118, 20, 84,
		 22,
		 50, 59, 77, 36, 111, 43, 49, 107, 41, 63, 65, 89, 87, 46, 51, 10, 11, 111,
		 7, 22,
		 34, 69, 70, 24, 85, 35, 37, 81, 47, 57, 12, 29, 25, 40, 27, 44, 18, 59,
		 39, 43,
		 10, 102, 34, 36, 80, 19, 25, 91, 100, 27, 114, 67, 102, 66, 45, 113, 31,
		 70, 18,
		 94, 58, 73, 107, 91, 42, 37, 36, 48, 16, 95, 72, 53, 111, 71, 22, 5, 47,
		 71, 28,
		 72, 8, 58, 98, 48, 34, 64, 66, 30, 50, 39, 102, 109, 63, 107, 27, 71, 94,
		 9,
		 61, 72, 43, 96, 11, 120, 25, 18, 69, 4, 116, 82, 3, 111, 92, 117, 15, 101,
		 37, 22,
		 109, 40, 109, 5, 2, 55, 54, 80, 19, 99, 61, 69, 8, 108, 9, 14, 49, 44, 48,
		 22,
		 31, 18, 14, 35};
	//sorting the array
	quickSort(guestAges, 0, NUM_GUESTS-1);
	//printing the avg
    printf("the avg age is :%f\n",averageAge(guestAges,NUM_GUESTS));
	// printing the num of kids meals
	printf("there are %d kids under 13\n",numOfKidsMeals(guestAges,NUM_GUESTS));
	//input
	printf("enter an age to find :   ");
    scanf("%d",&ageToFind);
	getchar();//buffer cleaner
	//chack if guest found and prints a masege
	if(findGuest(guestAges,NUM_GUESTS,ageToFind))
	{
		printf("guest fuond\n");
	}
	else
	{
		printf("no guest found\n");
	}
	//second input
	printf("enter an age to find of a couple :   ");
    scanf("%d",&ageToFind);
	getchar();//buffer clnear
	// calls the func and saves the value
	couple =findCouple(guestAges,NUM_GUESTS,ageToFind);
	//if there is at least one guset with that age
	if(couple != ERROR)
	{
		//prints ameseg to a user
		if (couple==TRUE)
		{
			printf("a coupel fuond\n");
		}
		else if(couple== FALSE)
		{
			printf("no couple found\n");
		}
	}

	printf("youngest %d\n",guestAges[0]);

	printf("oldest %d\n", guestAges[NUM_GUESTS-1]);
	return 0;
}

/*
Function will return average age of party guests
input: age array, number of guests
output: average age
*/
float averageAge(int guestAges[], int size)
{
	float avg = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += guestAges[i];
	}
	avg = ((float)sum / size);
	return avg;
}
/*
a quick Sort Algorithm to make serching faster (this Function calls it self) can be replased with the qSort c func
input : array (int) guestAges the first(int) plase to sort from and last(int) the last plase in the array
output : none
*/
void quickSort(int guestAges[], int first, int last)
{
	int i=0, j=0, pivot=0, temp=0;
	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (guestAges[i] <= guestAges[pivot] && i < last)
			{
				i++;
			}
			while (guestAges[j] > guestAges[pivot])
			{
				j--;
			}
			if (i < j)
			{
				temp = guestAges[i];
				guestAges[i] = guestAges[j];
				guestAges[j] = temp;
			}
		}
		temp = guestAges[pivot];
		guestAges[pivot] = guestAges[j];
		guestAges[j] = temp;
		quickSort(guestAges, first, j - 1);
		quickSort(guestAges, j + 1, last);
	}
}
/*
this func checks the array and find the amuont of kids under 13
input:guestAges[](int) the ages of the guests and (int)size the size of the 
ouput:the num of kids under 13
*/
int numOfKidsMeals(int guestAges[] ,int size)
{
	int kidsMeals =0;
	for(int i =0;i< size;i++)
	{
		if (guestAges[i]> KIDS_MEAL_AGE)
		{
			continue;
		}
		kidsMeals++;
	}
	return kidsMeals;
}
/*
this func returns if  a num is in the array useing binarySearch algorithm
input:the array(int) the size of the array(int) int x the num we tring to find and isIndex int that talls if we should return the index
output: if the num is in the array or the index
*/
int binarySearch(int guestAges[], int size, int x,int isIndex)
{
   int low=0, mid=0, high=size-1;
   while(low <= high)
   {
        mid = (low + high) / 2;
        if (x < guestAges[mid])
        {
            high = mid - 1;
        }
        else if (x > guestAges[mid])
        {
            low = mid + 1;
        }
        else
        {
            if(isIndex==FALSE)
            {
                return mid;
            }
            else
            {
                return TRUE;
            }
        }
   }
   return FALSE;
}
/*
finds if an age from the input is in the array(calling the binarySearch func)
input:the array (int) the size of the array(int) and the age to find
output:if there a age is in the array ( int 1 if true 0 if false)
*/
int findGuest(int guestAges[],int size,int ageToFind)
{
    int found =FALSE;
	//calling the search func
    found = binarySearch(guestAges,size,ageToFind,FALSE);
    return found;
}
/*
finds if an age from the input is in the array twice or more(calling the binarySearch func)
input:the array (int) the size of the array(int) and the age to find
output:if there a age is in the array ( int 1 if true -1 if tere is no inputed age in the array 0 if false)
*/
int findCouple(int guestAges[],int size,int ageToFind)
{
    int found =FALSE;
    int index=0;
	//checks if there is this age at all
    if (findGuest(guestAges,size,ageToFind) == TRUE)
    {
		// finds the index of the age
        index = binarySearch(guestAges,size,ageToFind,TRUE);
		//in case the index is 0 and we cant do index -1 
        if (index == 0)
        {
			//checks if there is a couple
            if(guestAges[index] == guestAges[index+1])
            {
                return TRUE;
			}
            else
            {
                return FALSE;
            }
        }
        else 
        {
			//checks if there is a couple
            if(guestAges[index] == guestAges[index+1] || guestAges[index] == guestAges[index-1])
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }
    }
	//prints error mesege
    else
    {
        printf("no gests with that age at all\n");
		return ERROR;
    }
}