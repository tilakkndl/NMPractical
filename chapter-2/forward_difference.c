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
    printf("\t\tNewton's Forward Difference Interpolation\n");
    system("color 71");
    int n, i, j;
    float x[100], f[100], fd[100], xp, value = 0, p = 1, h, s;
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
    s = (xp - x[0]) / h;
    for (i = 0; i < n; i++)
    {
        fd[i] = f[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            fd[j] = (fd[j] - fd[j - 1]);
        }
    }

    value = fd[0];
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            p *= (s - j + 1);
        }
        value = value + (fd[i] * p) / factorial(i);
        p = 1;
    }

    printf("value at %f is %f", xp, value);
}

// Enter number of data points: 5
// Enter data points and functional value respectively:
// 10 0.1836
// 20 0.3420
// 30 0.5
// 40 0.6428
// 50 0.7660
// Enter x at which interpolated value is to be calculated:25
// value at 25.000000 is 0.422219