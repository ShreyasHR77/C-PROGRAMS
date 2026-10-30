#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,nextterm,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=1;i<=n;++i)
    {
        printf("%d",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    printf("\n");
    return 0;
}
/*
Output:
Enter the number of terms: 10
Fibonacci Series: 01123581321345589
*/