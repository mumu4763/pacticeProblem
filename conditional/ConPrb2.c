#include<stdio.h>
void main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("%d is an Evene integer.",num);
    }
    else
    {
        printf("%d is an Odd integer.",num);
    }

    
}