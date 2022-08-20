#include <stdio.h>
int main()
{
    float coff[4];
    int i;
    float ans[4];
    ans[3] = 0;
    float x;
    printf("Enter four cofficent from a0 to a4");
    for (i = 0; i < 4; i++)
    {
        scanf("%f", &coff[i]);
    }
    printf("The cofficent is   x * x * x* %f + %f * x * x + %f * x + %f", coff[3], coff[2], coff[1], coff[0]);
    printf("Enter the root point ");
    scanf("%f", &x);
    for (i = 2; i >= 0; i--)
    {
        ans[i] = coff[i + 1] + (ans[i + 1] * x);
    }
    printf("The polynomial is %f * x * x + %f * x + %f", ans[2], ans[1], ans[0]);
}