// program to calculate derivative using backward difference
#include <stdio.h>
#define f(x) x *x

int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tBackward Difference Approximation\n\n");
    system("color 71");

    float x, h, fx;
    printf("Enter x and h:  ");
    scanf("%f%f", &x, &h);
    fx = f(x);

    float fxminush, f1x;
    fxminush = f(x - h);
    f1x = (fx - fxminush) / h;
    printf("The value of derivative of x^2 at %.3f is:- %.3f", x, f1x);

    return 0;
}
// Enter x and h   1   0.2
// The value of derivative of x^2 at 1.000 is 1.800
