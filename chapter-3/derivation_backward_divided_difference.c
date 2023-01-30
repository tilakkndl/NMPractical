// program to implement derivation using newton's backward divided difference
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
    printf("\tDerivation Using Newton's Backward Divided Difference\n\n");
    system("color 71");

    float x[10], fx[10], value, sum, h, s, xp, bd[10], factor, term;
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
    printf("Enter the point at which derivative is to be calculate\t");
    scanf("%f", &xp);
    h = x[1] - x[0];
    s = (xp - x[n - 1]) / h;
    for (i = 0; i < n; i++)
    {
        bd[i] = fx[i];
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            bd[j] = (bd[j + 1] - bd[j]);
        }
    }
    value = bd[n - 2];
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
                    factor = factor * (s + k);
                }
            }
            term += factor;
        }
        value += bd[n - i] * term / fact(i);
    }
    value = value / h;
    printf("\nThe value of derivative at %.2f is %.2f\n", xp, value);
}
// Enter number of data points     5
// Enter the data points   5 10
// 6 14.5
// 7 19.5
// 8 22.5
// 9 32
// Enter the point at which derivative is to be calculate  9
// 18.54