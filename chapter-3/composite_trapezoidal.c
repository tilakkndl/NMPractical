// program to implement composite trapezoidal rule
#include <stdio.h>
#include <math.h>
#define f(x) (exp(x))
int main()
{

    printf("\n\t\t===================================================\n");
    printf("\t\t Composite Trapezoidal Rule\n\n");

    system("color 71");
    int i;
    float x0, xn, k, h, sum, value;
    printf("Enter lower and upper limit : ");
    scanf("%f%f", &x0, &xn);
    printf("Enter the number of segments : ");
    scanf("%f", &k);
    h = (xn - x0) / k;
    sum = f(x0) + f(xn);
    for (i = 1; i < k; i++)
        sum += 2 * f(x0 + i * h);
    value = h * sum / 2;
    printf("\n\nIntegration of exp(x) from %.2f to %.2f is : %.2f\n\n", x0, xn, value);

    return 0;
}
// Enter lower and upper limit     -1 1
// Enter the number of segments    2
// Integration of exp(x) from -1.00 to 1.00 is 2.54