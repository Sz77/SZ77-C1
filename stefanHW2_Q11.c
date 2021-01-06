#include <stdio.h>
int main(void)
{
	float firstNum = 18;
	float secondNum = 12;
	
	if (firstNum>secondNum)
	{
		firstNum -= (firstNum - secondNum) + ((secondNum += firstNum - secondNum) *0);
		printf (" the first num is:%f and the second num is: %f\n\n " ,firstNum,secondNum);
	}
	else if (firstNum<secondNum)
	{
		secondNum -= (secondNum -firstNum)+((firstNum += secondNum - secondNum)*0);
		printf (" the first num is:%f and the second num is: %f\n\n " ,firstNum,secondNum);
	}
	
	getchar();
	return (0);
}