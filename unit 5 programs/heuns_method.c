// a Program to solve ODE by Using Heun's method
#include <conio.h>
#include <stdio.h>
#define f(x, y) 2 * x + y
void main()
{
    printf("\n\t\t===================================================\n");

    printf("\t\tImplement ODE by Using Heun's method  \n\n");
    system("color 71");
    float x, y, h, xn, l;
    printf("Enter value for x and y : ");
    scanf("%f%f", &x, &y);
    printf("Enter value for h and last of x : ");
    scanf("%f%f", &h, &xn);
    while (x + h <= xn)
    {
        l = (h / 2) * (f(x, y) + f(x + h, y + h * f(x, y)));
        y = y + l;
        x = x + h;

        printf("y = %f\tx = %f\n", y, x);
    }
    getch();
}

// Enter value for x and y : 0 1
// Enter value for h and last of x :  0.1   0.4
