#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) cos(x) - 3 * x + 1
#define g(x) (1 + cos(x)) / 3

int main()
{
    printf("\n\t\t===================================================\n");
    printf("\t\tFixed Point Method\t\t\n");
    system("color 71");

    int N, step = 1;
    float x0, x1, e, f0, f1;
    printf("\nEnter the initial value to x0 = ");
    scanf("%f", &x0);
    printf("Enter tolerable error =  ");
    scanf("%f", &e);
    printf("ENter number of iterations : ");
    scanf("%d", &N);

    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do
    {
        x1 = g(x0);
        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, f(x0), x1, f(x1));
        step++;

        //        if(step>N){
        // printf("\n\nNot Convergent\n\n");
        // exit(0);
        //        }

        x0 = x1;
    } while (fabs(f(x1)) > e);

    printf("\nRoot is %f", x1);
}