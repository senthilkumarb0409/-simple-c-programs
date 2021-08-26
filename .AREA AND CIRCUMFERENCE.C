//AREA AND CIRCUMFERENCE
#include<stdio.h>
int main()
{
	float radius,area,circumference;
	printf("Enter the radius value:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	circumference=2*3.14*radius;
	printf("\n Area of the circle is: %f",area);
	printf("\n Circumference of the circle is: %f",circumference);
}
