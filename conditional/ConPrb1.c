#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);

    if(num1 == num2)
    {
        printf("Equal Number.");
    }
    else
    {
        printf("Numbers are not equal!");
    }

    
}