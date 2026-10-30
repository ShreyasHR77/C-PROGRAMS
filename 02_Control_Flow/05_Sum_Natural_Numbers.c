#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the Last Natural Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The Sum of First %d Natural Numbers is: %d\n",n,sum);
}
/*
Output:
Enter the Last Natural Number:10
The Sum of First 10 Natural Numbers is: 55
*/