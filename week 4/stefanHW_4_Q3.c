#include <stdio.h>

#define PI 3.14

int main()
{
	//crate veribel
    float radius= 0;
	float volume=0;
	//radius input
    printf("Enter the radius in centimeters?\n");
    scanf("%f",&radius);
	// volume calculation
    volume = (radius*radius*radius)*((3*PI)/4);
	//printing thr radiusand the volume
    printf("the radius of the ball is:%.2fcm \n", radius);
	printf ("The volume of a ball is:%.2f",volume);
    return(0);
}