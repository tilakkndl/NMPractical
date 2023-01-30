// program to implement composite Simpson's 1/3 rule
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return sqrt(1 - x * x);
}
int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tComposite Simpson's 1/3 Rule\n\n");
    system("color 71");
    int i;
    float x0, xn, h, value, k, sum;
    printf("Enter the lower and upper limit : ");
    scanf("%f%f", &x0, &xn);
    printf("Enter the number of segments : ");
    scanf("%f", &k);
    h = (xn - x0) / k;
    sum = f(x0) + f(xn);
    for (i = 1; i < k; i = i + 2)
        sum += 4 * f(x0 + i * h);
    for (i = 2; i < k - 1; i = i + 2)
        sum += 2 * f(x0 + i * h);
    value = (h / 3) * sum;
    printf("\n\nIntegration of the function (sqrt(1- x * x))  from %.2f to %.2f is : %.2f\n\n", x0, xn, value);
}
// Enter the lower and upper limit 0 1
// Enter the number of segments    4
// 0.770899