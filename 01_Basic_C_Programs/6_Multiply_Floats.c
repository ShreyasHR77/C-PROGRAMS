#include<stdio.h>
int main()
{
    float num1,num2,product;
    printf("Enter any two floating point numbers: ");
    scanf("%f %f",&num1,&num2);
    product=num1*num2;
    printf("The product is %f",product);
    return 0;
}
/*
Output:
Enter any two floating point numbers: 10.02
2.3
The product is 23.046001
*/