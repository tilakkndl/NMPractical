#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    printf("\n\t\t===================================================\n");
    
    printf("\t\tNewton's Backward Difference Interpolation\n");
    system("color 71");
    int n, i, j;
    float x[100], f[100], bd[100], xp, value = 0, p = 1, h, s;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &f[i]);
    }
    printf("Enter x at which interpolated value is to be calculated:");
    scanf("%f", &xp);

    h = x[1] - x[0];
    s = (xp - x[n - 1]) / h;
    for (i = 0; i < n; i++)
    {
        bd[i] = f[i];
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            bd[j] = (bd[j + 1] - bd[j]);
        }
    }

    value = bd[n - 1];
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            p *= (s + j - 1);
        }
        value = value + (bd[n - 1 - i] * p) / factorial(i);
        p = 1;
    }

    printf("value at %f is %f", xp, value);
}

// Enter number of data points: 7
// Enter data points and functional value respectively:
// 100 10.63
// 150 13.03
// 200 15.04
// 250 16.81
// 300 18.42
// 350 19.90
// 400 21.27
// Enter x at which interpolated value is to be calculated:218
// value at 218.000000 is 15.699284