#include <stdio.h>
#include <math.h>
int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tImplement a program to Elliptic PDE(Laplace Equation)   \n\n");
    system("color 71");
    int n, i, j, k;
    float H, L, h, l;
    float a[20][20], b[20], pivot, x[20], sum, value, bvalue;
    printf("Enter the dimension of plate ");
    scanf("%f%f", &H, &L);
    printf("Enter the dimension of grid ");
    scanf("%f%f", &h, &l);
    n = (H / h) + 1;
    printf("Enter the coefficients of matrix:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter the RHS vector");
    for (i = 0; i < n; i++)
        scanf("%f", &b[i]);

    for (k = 0; k < n; k++)
    {
        pivot = a[k][k];
        if (abs(pivot) < 0.000001)
            printf("method fails");
        else
            for (i = k + 1; i < n; i++)
            {
                value = a[i][k] / pivot;
                for (j = 0; j < n; j++)
                    a[i][j] = a[i][j] - a[k][j] * value;
                b[i] = b[i] - b[k] * value;
            }
    }

    x[n - 1] = b[n - 1] / a[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        sum = 0;
        for (j = i + 1; j < n; j++)
        {
            sum += a[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / a[i][i];
    }
    printf("The solution vector is\n");
    for (i = 0; i < n; i++)
        printf("%f\n", x[i]);
}
// Enter the dimension of plate 15 15
// Enter the dimension of grid 5 5
// Enter the coefficients of matrix -4 1 1 0
// 1 -4 0 1
// 1 0 -4 1
// 0 1 1 -4
// Enter the RHS vector-100 -100 -100 -100
// The solution vector is
// 50.000000
// 50.000000
// 50.000000
// 50.000000
