#include<stdio.h>
int main()
{
    char op;
    float num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%f %f", &num1, &num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error! Operator is not correct");
            return 1;
    }
    printf("Result: %f %c %f = %f\n", num1, op, num2, result);
    return 0;
}
/*
Output:
Enter an operator (+, -, *, /): -
Enter two operands: 
20
-6
Result: 20.000000 - -6.000000 = 26.000000
*/