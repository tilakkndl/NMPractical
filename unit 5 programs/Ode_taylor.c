// C Program to solve ODE by using Taylor's series method
#include <stdio.h>
#include <conio.h>
#include <math.h>

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return (n * fact(n - 1));
}

int main()
{
	printf("\n\t\t===================================================\n");

	printf("\t\tImplement ODE by using Taylor's series method \n\n");
	system("color 71");
	float x, x0, y0, yx, fdy, sdy, tdy;
	printf("Enter initial Values of x &y : ");
	scanf("%f%f", &x0, &y0);
	printf("Enter x at which function to be evaluated: ");
	scanf("%f", &x);
	fdy = (x0) * (x0) + (y0) * (y0);		// y'=x^2+y^2
	sdy = 2 * (x0) + 2 * (y0) * (fdy);		// y''=2x+ 2y*y'
	tdy = 2 + 2 * y0 * sdy + 2 * fdy * fdy; // y'''= 2+2y*y'' + 2(y'^2)
	yx = y0 + (x - x0) * fdy + (x - x0) * (x - x0) * sdy / fact(2) + (x - x0) * (x - x0) * (x - x0) * tdy / fact(3);
	printf("Function Value at x=%f is %f\n", x, yx);
	getch();
	return 0;
}
// Enter initial Values of x &y : 0.5   1
// Enter x at which function to be evaluated : 0.25
// Function Value at x=0.25 is 0.765
