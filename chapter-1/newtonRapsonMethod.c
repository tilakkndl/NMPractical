#include <stdio.h>
#include <math.h>
#define f(x) x *x - 3 * x + 2;
#define df(x) 2 * x - 3
#define E 0.001
int main()
{
    float x0, x1, f0, f1, df1;
    int i = 0;
    printf("Enter the interval\n");
    scanf("%f", &x0);
    f1 = f(x0);
    df1 = df(x0);
    x1 = x0 - (f1 / df1);

    while (fabs((x1 - x0) / x1) > E)
    {
        x0 = x1;
        f1 = f(x0);
        df1 = df(x0);
        x1 = x0 - f1 / df1;
        i++;
    }
    printf("The result after %i iteration is %f", i, x1);
}