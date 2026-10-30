#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("The Entered Year %d is  leap year \n",year);
    }
    else if(year%100==0)
    {
        printf("The Entered Year %d is  leap year \n",year);
    }
    else if(year%4==0)
    {
        printf("The Entered Year %d is not a leap year \n",year);
    }
    else
    {
        printf("The Entered Year %d is not a leap year \n",year);
    }
    return 0;
/*
Output:
Enter a Year: 2020
The Entered Year 2020 is  leap year
*/