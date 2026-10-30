#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The Entered Number %d is Even\n",num);
    }
    else
    {
        printf("The Entered Number %d is Odd\n",num);
    }
    return 0;
}
/*
Output:
Enter a Number:5
The Entered Number 5 is Odd
*/