//LARGER OR SMALLER THAN 100
#include<stdio.h>

int main()
{
    int number;
    

    printf("Enter the  number to be checked:");
    scanf("%d",&number);

    if(number < 100)
    {
        printf("the number is smaller than 100");
    }
    else
    {
        printf("the number is greater than 100 ");
    }
    
}
