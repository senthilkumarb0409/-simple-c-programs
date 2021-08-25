//PROGRAM TO CONVERT CELSIUS TO FAHRENHEIT 
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("\n Enter the temperature in celsius:");
	scanf("%f",&celsius);
	fahrenheit=((celsius*9/5)+32);
	printf("\n Temperature in fahrenheit is: %f",fahrenheit);
}
