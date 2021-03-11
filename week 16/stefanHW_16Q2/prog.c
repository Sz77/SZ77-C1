/*********************************
* Class: MAGSHIMIM C2			 *
* Week 1           				 *
* HW Question - Thanks Program 	 *
**********************************/

#include <stdio.h>
#include <string.h>

void printMessage(char str[]);

int main(void)
{
    //##########################################################################################################
	//#comp error                                                                                               #
	//#strncat needs 2 strings/arrays of chars so you needs to be an array with the length of 1                #
	//#run time error                                                                                           #               
	//#the array str was to short it needed atlist 7 for the size                                               #
	//#The conventions error                                                                                    #
	//#the comments should be in English                                                                       #     
    //##########################################################################################################
	char str[7] = "THANK ";
	char you[1] = "u";

	strncat(str, you, 1); // do not fix this line or the next one
	printMessage(str);
	return 0;
}

/*
printing the masseg
*/
void printMessage(char str[])
{
	printf("Hello Sigal! I just wanted to say that studying with you...\n\n");
	printf("Really made me understand how much I love\n");
	printf(" __  __                 _     _           _           \n");
	printf("|  \\/  |               | |   (_)         (_)          \n");
	printf("| \\  / | __ _  __ _ ___| |__  _ _ __ ___  _ _ __ ___  \n");
	printf("| |\\/| |/ _` |/ _` / __| '_ \\| | '_ ` _ \\| | '_ ` _ \\ \n");
	printf("| |  | | (_|s | (_| \\__ \\ | | | | | | | | | | | | | | |\n");
	printf("|_|  |_|\\__,_|\\__, |___/_| |_|_|_| |_| |_|_|_| |_| |_|\n");
	printf("              __/ |                                  \n");
	printf("              |___/                                  \n\n");

	printf("Without C you would be just Gal :D\n");
	printf("See you in class!\n");
	printf("and %s !!", str);

}