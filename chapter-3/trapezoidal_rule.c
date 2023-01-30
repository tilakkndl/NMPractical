// program to implement trapezoidal rule
#include <stdio.h>

#define f(x) (x * x * x + 2)
int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tTrapezoidal Rule\n\n");
    system("color 71");

    float x0, x1, fx0, fx1, h, value;
    printf("Enter the lower and upper limits : ");
    scanf("%f%f", &x0, &x1);
    fx0 = f(x0);
    fx1 = f(x1);
    h = x1 - x0;
    value = (h / 2) * (fx0 + fx1);
    printf("\nIntegration of x^3 + 2 from %.2f to %.2f is :  %.2f\n\n ", x0, x1, value);
}
// Enter the lower and upper limits        2 8
// Integration of x^3 + 2 from 2.00 to 8.00 is 1572.00