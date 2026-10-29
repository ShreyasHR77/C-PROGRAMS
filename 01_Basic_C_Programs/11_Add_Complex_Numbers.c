#include <stdio.h>

typedef struct {
    int real;
    int img;
} Complex;

Complex add(Complex x, Complex y)
{
    Complex sum;

    sum.real = x.real + y.real;
    sum.img = x.img + y.img;

    return sum;
}

int main()
{
    Complex a = {2, 3};
    Complex b = {4, 5};

    Complex sum = add(a, b);

    printf("a = %d + %di\n", a.real, a.img);
    printf("b = %d + %di\n", b.real, b.img);
    printf("sum = %d + %di\n", sum.real, sum.img);

    return 0;
}
/*
a = 2 + 3i
b = 4 + 5i
sum = 6 + 8i
*/