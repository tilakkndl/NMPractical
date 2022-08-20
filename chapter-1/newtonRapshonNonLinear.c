#include <stdio.h>
#define f(x, y) x *x + x *y - 6;
#define g(x, y) x *x - y *y - 3;
#define f1(x, y) 2 * x + y;
#define f2(x) x;
#define g1(x) 2 * x;
#define g2(y) -2 * y;
#define E 0.001

int main()
{
    float x0, y0, x1, y1, f1, f2, g1, g2, D, f, g;
    printf("Enter two points"); // 1, 1
    scanf("%f%f", &x0, &y0);

    f1 = f1(x0, y0);
    f2 = f2(x0);
    g1 = g1(x0);
    g2 = g2(y0);
    D = f1 * g2 - g1 * f2;
    f = f(x0, y0);
    g = g(x0, y0);
    x1 = x0 - (f * g2 - g * f2) / (f1 * g2 - f2 * g1);
    y1 = y0 - (g * f1 - f * g1) / (f1 * g2 - f2 * g1);
    int i = 0;

    while (((x1 - x0) > E) && ((y1 - y0) > E))
    {
        f1 = f1(x0, y0);
        f2 = f2(x0);
        g1 = g1(x0);
        g2 = g2(y0);
        D = f1 * g2 - g1 * f2;
        f = f(x0, y0);
        g = g(x0, y0);
        x1 = x0 - (f * g2 - g * f2) / (f1 * g2 - f2 * g1);
        y1 = y0 - (g * f1 - f * g1) / (f1 * g2 - f2 * g1);
        x0 = x1;
        y0 = y1;
        i++;
    }
    printf("The required ans after %d iteration  is %f and %f  ", i, x1, y1);
}
