#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The factorial of this negative number %d is not possible\n",num);
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            fact*=i;
        }
        printf("The factorial of %d is %d\n",num,fact);
    }
    return 0;
}
/*
Output;
Enter a Number: 8
The factorial of 8 is 40320
*/