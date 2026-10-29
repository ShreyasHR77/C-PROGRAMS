#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping \n");
    printf("num1=%d \t num2=%d \n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping \n");
    printf("num1=%d \t num2=%d",num1,num2);
    return 0;
}
/*
Output:
Enter any two numbers: 10
20
Before swapping 
num1=10          num2=20 
After swapping 
num1=20          num2=10
*/