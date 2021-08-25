//PROGRAM TO CONVERT FAHRENHEIT TO CELSIUS
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("\n Enter the temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5)/9;
	printf("\n Temperature in celsius is: %f",celsius);
}
