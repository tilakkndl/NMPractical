// program to implement derivation using newton's forward divided difference
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
#include <stdio.h>
int main()
{

    printf("\n\t\t===================================================\n");
    printf("\tDerivation Using Newton's Forward Divided Difference\n\n");
    system("color 71");
    float x[10], fx[10], value, sum, h, s, xp, fd[10], factor, term;
    int i, j, n, k;
    printf("Enter number of data points : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &fx[i]);
    }
    printf("Enter the point at which derivative is to be calculated : ");
    scanf("%f", &xp);
    h = x[1] - x[0];
    s = (xp - x[0]) / h;
    for (i = 0; i < n; i++)
    {
        fd[i] = fx[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            fd[j] = (fd[j] - fd[j - 1]);
        }
    }

    value = fd[1];
    for (i = 2; i < n; i++)
    {
        term = 0;
        for (j = 0; j < i; j++)
        {
            factor = 1;
            for (k = 0; k < i; k++)
            {
                if (j != k)
                {
                    factor = factor * (s - k);
                }
            }
            term += factor;
        }
        value += fd[i] * term / fact(i);
    }
    value = value / h;
    printf("\nThe value of derivative at %.2f is %.2f\n", xp, value);
}
// Enter number of data points     6
// Enter the data points   1 0
// 1.2 0.128
// 1.4 0.544
// 1.6 1.296
// 1.8 2.432
// 2 4
// Enter the point at which derivative is to be calculate  1.1
// 0.63'