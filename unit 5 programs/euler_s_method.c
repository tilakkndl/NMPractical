//	 a Program to solve ODE by Using Eulers's method.
#include <stdio.h>
#include <conio.h>

#define f(x, y) 2 * x + y

int main()
{
        printf("\n\t\t===================================================\n");

        printf("\t\tImplement ODE by Using Eulers's method  \n\n");
        system("color 71");
        float x0, y0, xn, h, yn, slope;
        int i, n;

        printf("Enter value of x0 : ");
        scanf("%f", &x0);
        printf("Enter value of y0 : ");
        scanf("%f", &y0);
        printf("Enter the value of step size h :  ");
        scanf("%f", &h);
        printf("Enter number of steps  : ");
        scanf("%d", &n);

        printf("\nx0\ty0\tslope\tyn\n");

        for (i = 0; i < n; i++)
        {
                slope = f(x0, y0);
                yn = y0 + h * slope;
                printf("\n%.4f\t%.4f\t%0.4f\t%.4f\n", x0, y0, slope, yn);
                y0 = yn;
                x0 = x0 + h;
        }

        return 0;
}
// Enter value of x0 : 0
// Enter value of y0 : 1
// Enter the value of step size h :0.1
// Enter number of steps  : 5
