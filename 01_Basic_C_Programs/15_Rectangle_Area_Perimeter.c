#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter the Length of a Rectangle: ");
    scanf("%f",&length);
    printf("Enter the Breadth of a Rectangle: ");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("The Area of the Rectangle is %f \n",area);
    printf("The Perimeter of the Rectangle is %f \n",perimeter);
    return 0;
}
/*
Output:
Enter the Length of a rectangle: 5
Enter the Breadth of a rectangle: 3
The Area of the Rectangle is 15.000000
The Perimeter of the Rectangle is 16.000000
*/