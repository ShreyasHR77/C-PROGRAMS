#include<stdio.h>
int main()
{
    float principal,rate,time,si;
    printf("Enter the Princial Amount: ");
    scanf("%f",&principal);
    printf("Enter the Interest Rate: ");
    scanf("%f",&rate);
    printf("Enter the Time Period in years: ");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    printf("The simple Interest is :%f ",si);
}
/*
Output:
Enter the Princial Amount: 10000
Enter the Interest Rate: 5
Enter the Time Period in years: 2
The simple Interest is :1000.000000 
*/