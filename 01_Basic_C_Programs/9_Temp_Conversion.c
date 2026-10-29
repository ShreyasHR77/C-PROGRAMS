#include<stdio.h>
int main()
{
    float celcious,faranheit;
    printf("Enter the temparature in celcious: ");
    scanf("%f",&celcious);
    faranheit=(celcious*9.0/5.0)+32;
    printf("The temparature in faranheit is %f",faranheit);
    return 0;
}
/*
Output:
Enter the temparature in celcious: 36
The temparature in faranheit is 96.800003
*/