#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    printf("\n\t\t===================================================\n");

    system("color 71");
    printf("\t\tImplement Cholesky Decomposition\n\n");
    float A[20][20] = {0}, L[20][20] = {0}, U[20][20];
    float B[20] = {0}, X[20] = {0}, Y[20] = {0};

    int i, j, k, n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    printf("\nEnter matrix element:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            float sum = 0;

            if (j == i)
            {
                for (k = 0; k < j; k++)
                {
                    sum += pow(L[j][k], 2);
                }
                L[j][j] = sqrt(A[j][j] - sum);
            }
            else
            {
                for (k = 0; k < j; k++)
                    sum += (L[i][k] * L[j][k]);
                L[i][j] = (A[i][j] - sum) / L[j][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            U[i][j] = L[j][i];
    }
    printf("[L]: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%.3f", L[i][j]);
        printf("\n");
    }
    printf("\n\n[U]: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%.3f", U[i][j]);
        printf("\n");
    }
}
// Enter the order of square matrix: 3

// Enter matrix element:
// 1 4 7
// 4 80 44
// 7 44 89
