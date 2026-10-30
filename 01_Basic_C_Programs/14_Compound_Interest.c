#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time,amount,cp,n;
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal);
    printf("Enter the Interest Rate: ");
    scanf("%f",&rate);
    printf("Enter the Time Period in years: ");
    scanf("%f",&time);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%f", &n);
    amount=principal*pow((1+(rate/(n*100))),n*time);
    cp=amount-principal;
    printf("The Compound Interest is :%.2f\n",cp);
}
/*
Output:
Enter the Principal Amount: 10000
Enter the Interest Rate: 5
Enter the Time Period in years: 2
Enter number of times interest is compounded per year: 4
The Compound Interest is :1025.315125
*/