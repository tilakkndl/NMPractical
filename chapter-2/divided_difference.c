#include <stdio.h>

int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tNewton's Divided Difference Interpolation\n");

    int n, i, j;
    float x[100], f[100], dd[100], xp, value = 0, p = 1;
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter data points and functional value respectively:\n");
    for (i = 0; i < n; i++)

    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &f[i]);
    }
    printf("Enter x at which interpolated value is to be calculated:");
    scanf("%f", &xp);

    for (i = 0; i < n; i++)
    {
        dd[i] = f[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            dd[j] = (dd[j] - dd[j - 1]) / (x[j] - x[j - 1 - i]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            p *= (xp - x[j]);
        }
        value = value + dd[i] * p;
        p = 1;
    }

    printf("value at %f is %f", xp, value);
}

// Enter number of data points: 6
// Enter data points and functional value respectively:
// 0 0
// 10 227.04
// 15 362.78
// 20 517.35
// 22.5 602.97
// 30 901.67
// Enter x at which interpolated value is to be calculated:16
// value at 16.000000 is 392.070557