#include <stdio.h>
#include <math.h>
#include <conio.h>

double func(double x)
{
    return x * x - 3 * x + 2; // the original fucntion f(x)
}
// derivative of the function f(x)
double derivfunc(double x)
{
    return 2 * x - 3;
}

int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tNewton Raphson Method\t\t\n");
    system("color 71");

    int N, step = 1;
    float x0, x1, e, f0, f1;
    printf("\nEnter the initial value to x0 = ");
    scanf("%f", &x0);
    printf("Enter tolerable error =  ");
    scanf("%f", &e);
    printf("ENter number of iterations : ");
    scanf("%d", &N);

    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do
    {
        x1 = x0 - func(x0) / derivfunc(x0);

        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, f0, x1, f1);
        x0 = x1;
        step = step + 1;

        f1 = func(x1);
    } while (fabs(f1) > e);

    printf("\n Root is : %f", x1);

    return 0;
}
