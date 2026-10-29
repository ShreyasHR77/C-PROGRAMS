#include<stdio.h>
int main()
{
    printf("The size of int   : %zu bytes \n",sizeof(int));
    printf("The size of float : %zu bytes \n",sizeof(float));
    printf("The size of char  : %zu bytes \n",sizeof(char));
    printf("The size of double: %zu bytes \n",sizeof(double));
}
/*
Output:
The size of int   : 4 bytes 
The size of float : 4 bytes 
The size of char  : 1 bytes 
The size of double: 8 bytes 
*/
