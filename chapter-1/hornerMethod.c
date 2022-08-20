#include <stdio.h>
int main()
{
    float coff[4];
    int i;
    float x;
    float result;
    printf("Enter four cofficent from a4 to a0");
    for (i = 0; i < 4; i++)
    {
        scanf("%f", &coff[i]);
    }
    printf("The cofficent is   x * x * x* %f + %f * x * x + %f * x + %f", coff[0], coff[1], coff[2], coff[3]);
    printf("Enter the point ");
    scanf("%f", &x);
    result = coff[0];
    for (i = 1; i < 4; i++)
    {
        result = result * x + coff[i];
    }
    printf("The value of the polynomial eqn at %f is %f", x, result);
}