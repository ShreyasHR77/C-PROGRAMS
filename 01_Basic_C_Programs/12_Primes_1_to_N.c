#include<stdio.h>
int main()
{
    int i,j,n,isprime;
    printf("Enter the value of n:\n ");
    scanf("%d",&n);
    printf("The prime numbers between 0 and %d are:\n",n);
    for(i=2;i<n;i++)
    {
        isprime=1;
        for(j=2;j<i/2;j++)
        {
           if(i%j==0)
           {
             isprime=0;
             break;
           }
        }
        if(isprime)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
/*
Output:
Enter the value of n:
 12
The prime numbers between 0 and 12 are:
2
3
4
5
7
11
*/