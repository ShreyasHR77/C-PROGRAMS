#include<stdio.h>
int main()
{
    int num1,num2,max;
    printf("Enter the Two Numbers to find LCM: ");
    scanf("%d %d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("The LCM of %d and %d is: %d\n",num1,num2,max);
            break;
        }
        max++;
    }
    return 0;
}
/*
Output:
Enter the Two Numbers to find LCM: 12 18
The LCM of 12 and 18 is: 36
*/   