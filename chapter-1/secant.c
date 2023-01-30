#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define f(x) x *x - 4 * x - 10
void main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tSecant Method\t\t\n");
    system("color 71");

    float x0, x1, x2, f0, f1, f2, e;
    int step = 1, N;

    printf("\nEnter two initial values :  ");
    scanf("%f%f", &x0, &x1);
    printf("Enter  error range : ");
    scanf("%f", &e);
    printf("Enter number of  interations: ");
    scanf("%d", &N);
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");

    do
    {
        f0 = f(x0);
        f1 = f(x1);

        x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
        f2 = f(x2);

        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, x1, x2, f2);
        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;
        step = step + 1;

    } while (fabs(f2) > e);

    printf("\n\tRoot is:  %f", x2);

    getch();
}