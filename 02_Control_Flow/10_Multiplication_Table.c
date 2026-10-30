#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number to print its Multiplication Table: ");
    scanf("%d",&n);
    printf("The Multiplication Table of %d is below: \n",n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
/*
Output:
Enter a Number to print its Multiplication Table: 9f
The Multiplication Table of 9 is below: 
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90
*/