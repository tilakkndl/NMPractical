// program to implement simpson's 1/3 rule
#include <stdio.h>
#include <math.h>

#define f(x) (sqrt(1 - x * x))
int main()
{

    printf("\n\t\t===================================================\n");
    printf("\t\t Simpson's 1/3 Rule\n\n");
    system("color 71");

    float x0, x1, x2, h, value;
    printf("Enter the lower and upper limit : ");
    scanf("%f%f", &x0, &x2);
    h = (x2 - x0) / 2;
    x1 = x0 + h;
    value = (h / 3) * (f(x0) + 4 * f(x1) + f(x2));

    printf("\n\nIntegration of the function (sqrt(1- x * x))  from %.2f to %.2f is : %.2f\n\n", x0, x2, value);
    return 0;
}
// Enter the lower and upper limit 0 1
// 0.744017