/*********************************
* Class: MAGSHIMIM C1			 *
* Week 11          				 *
**********************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//the len we need to put in strncat is the len of the second string 
int main(void)
{
	char str1[] = {'H', 'i', ' ', 0};
	char str2[] = {'H', 'o', 0};
	
	strncat(str1, str2,strlen(str2));
	
	printf("%s", str1);
	return 0;
	
	
}
