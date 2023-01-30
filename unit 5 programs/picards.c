#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    return x * x + y * y;
}
float f1(float x, float y)
{
    return (x * x * x) / 3;
}
float f2(float x, float y)
{
    return pow(x, 3) / 3 + pow(x, 7) / 63;
}
int main()
{
    printf("\n\t\t===================================================\n");

    printf("\t\tImplement Picard's iterative method  \n\n");
    system("color 71");
    float x0, y0, x1, y1, y2;
    printf("Enter x0 and y0 ");
    scanf("%f%f", &x0, &y0);
    printf("Enter x ");
    scanf("%f", &x1);
    y1 = y0 + (f1(x1, y0) - f1(x0, y0));
    y2 = y0 + (f2(x1, y0) - f2(x0, y0));
    printf("The value of y1 at x = %f is %f\n", x1, y1);
    printf("The value of y2 at x = %f is %f\n", x1, y2);
}
// Enter x0 and y0 0 0
// Enter x 1
// The value of y1 at x = 1.000000 is 0.333333
// The value of y2 at x = 1.000000 is 0.349206
