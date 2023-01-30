#include <stdio.h>

int main()
{
    printf("\n\t\t===================================================\n");

    printf("\t\tLinear Regression\n\n");
    system("color 71");

    int n, i, j;
    float x[100], f[100], fd[100], sx = 0, sy = 0, sxy = 0, sx2 = 0, b, a;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &f[i]);

        sx = sx + x[i];
        sy += f[i];
        sxy += x[i] * f[i];
        sx2 += x[i] * x[i];
    }

    b = ((n * sxy) - (sx * sy)) / ((n * sx2) - (sx * sx));
    a = (sy / n) - ((b * sx) / n);

    printf("a = %.3f\nb = %.3f\n", a, b);
    printf("The required linear fitting equation  is :-   y = %.3f+%.3fx", a, b);
}

// Enter number of data points: 5
// Enter data points and functional value respectively:
// 1 3
// 2 5
// 3 7
// 4 10
// 5 12
// a = 0.500000
// b = 2.300000
// y = 0.50+2.30x