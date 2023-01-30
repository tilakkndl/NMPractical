#include <stdio.h>
#include <conio.h>

void main()
{

    printf("\n\t\t===================================================\n");
    printf("\t\tSynthetic Division Method\t\t\n");
    system("color 71");

    int a[6], m, r, i, b[6];

    printf("\n Enter the highest degree of the equation (max 5): ");
    scanf("%d", &m);

    for (i = 0; i <= m; i++)
    {
        printf("\n Coefficient x[%d] = ", m - i);
        scanf("%d", &a[i]);
    }

    printf("\n Enter the value of 'r'  in (x-r) : ");
    scanf("%d", &r);

    b[0] = a[0];
    for (i = 1; i <= m; i++)
    {
        b[i] = (b[i - 1] * r) + a[i];
    }

    printf("\n Coefficients of quotient are: \n");
    for (i = 0; i < m; i++)
    {
        printf("\t%d", b[i]);
    }
    printf("\n Remainder is: %d\n\n", b[m]);
    getch();
}