#include<stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter the First Number: ");
    scanf("%f",&num1);
    printf("Enter the Second Number: ");
    scanf("%f",&num2);
    printf("Enter the Third Number: ");
    scanf("%f",&num3);
    if(num1>num2 && num1>num3)
    {
        printf("The Largest Number is: %f\n",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("The Largest Number is: %f\n",num2);
    }
    else
    {
        printf("The Largest Number is: %f\n",num3);
    }
}
/*
Output:
Enter the First Number: 10.5
Enter the Second Number: 20.3
Enter the Third Number: 10.6
The Largest Number is: 20.300000
*/