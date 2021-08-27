//PROGRAM TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n, fact=1;
    printf("Enter the number: ");
    scanf("%d", &num);
    n = num;
    while (num!=0)
    {
        fact = fact*num;
        num = num-1;
    }

    printf("The Factorial of %d is %d", n, fact);
}
