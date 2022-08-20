#include <stdio.h>
#include <math.h>
#define f(x) x *x - 4 * x - 10;
#define E 0.001
int main()
{
    float x0, x1, x2, f0, f1, f2;
    int i = 0;
    printf("Enter two intervals\n");
    scanf("%f%f", &x1, &x2);
    f1 = f(x1);
    f2 = f(x2);
    if (f1 * f2 > 0)
    {
        printf("Invalid intervals\n");
        return 0;
    }

    while (fabs((x2 - x1) / x2) > E)
    {
        x0 = (x1 + x2) / 2;
        f0 = f(x0);
        if (f1 * f0 < 0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
            f1 = f0;
        }
        i++;
    }
    x0 = (x1 + x2) / 2;
    printf("The result after %i iteration is %f", i, x0);
}