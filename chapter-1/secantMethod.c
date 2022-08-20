#include <stdio.h>
#include <math.h>
#define f(x) x *x - 4 * x - 10;
#define E 0.001
int main()
{
    float x3, x1, x2, f3, f1, f2;
    int i = 0;
    printf("Enter two intervals\n");
    scanf("%f%f", &x1, &x2);
    f1 = f(x1);
    f2 = f(x2);
    x3 = ((f2 * x1) - (x2 * f1)) / (f2 - f1);
    printf("%f", x3);
    while (fabs((x3 - x2) / x3) > E)
    {
        f3 = f(x3);
        x1 = x2;
        x2 = x3;
        f1 = f2;
        f2 = f3;
        x3 = (f2 * x1 - x2 * f1) / (f2 - f1);
        i++;
    }
    printf("The result after %i iteration is %f", i, x3);
}