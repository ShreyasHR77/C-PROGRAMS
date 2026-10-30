#include<stdio.h>
int main()
{
    float number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    if(number>0.00)
    {
        printf("The Entered number is positive\n");
    }
    else if(number<0.00)
    {
        printf("The Entered number is negative\n");
    }
    else
    {
        printf("The Entered number is zero\n");
    }
}
/*
Output:
Enter a Number: 5
The Entered number is positive
*/