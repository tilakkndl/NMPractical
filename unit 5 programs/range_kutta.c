// a Program to solve ODE by Using Runge-Kutta method.
#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    float m;
    m = 2 * x + y;
    return m;
}
int main()
{
    printf("\n\t\t(===================================================\n");

    printf("\t\tImplement ODE by Using Runge-Kutta method  \n\n");

    float x0, y0, m1, m2, m3, m4, m, y, x, h, xn;
    printf("Enter the value for x0 and y0 : ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the value for h:");
    scanf("%f", &h);
    x = x0;
    y = y0;

    while (x < x0 + h)
    {
        m1 = f(x0, y0);
        m2 = f((x0 + h / 2.0), (y0 + m1 * h / 2.0));
        m3 = f((x0 + h / 2.0), (y0 + m2 * h / 2.0));
        m4 = f((x0 + h), (y0 + m3 * h));
        y = y0 + (h / 6) * (m1 + 2 * m2 + 2 * m3 + m4);
        x = x0 + h;
        printf("\nAt x=%f\t y=%f\n\n", x, y);
    }
}
// Enter the value for x0 and y0 :  0 1
// Enter the value for h: 0.4
