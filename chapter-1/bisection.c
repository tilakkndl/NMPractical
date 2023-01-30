#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
// our polynomial
#define f(x) x *x *x - 4 * x - 9
void main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tBisection Method\t\t\n");
    system("color 71");
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;

    printf("\nEnter two initial values :  ");
    scanf("%f%f", &x0, &x1);
    printf("Enter  error range : ");
    scanf("%f", &e);

    f0 = f(x0);

    f1 = f(x1);

    if (f0 * f1 > 0.0)
    {
        printf("Incorrect Initial Guesses.\n");
        exit(0);
    }

    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
    {
        x2 = (x0 + x1) / 2;
        f2 = f(x2);

        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, x1, x2, f2);

        if (f0 * f2 < 0)
        {
            x1 = x2;
            f1 = f2;
        }
        else
        {
            x0 = x2;
            f0 = f2;
        }
        step = step + 1;
    } while (fabs(f2) > e);
    printf("\nRoot is: %f", x2);
    getch();
}