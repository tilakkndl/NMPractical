// Program to implement Gauss Elimination with partial pivoting.
#include <stdio.h>
int main()
{
	printf("\n\t\t===================================================\n");

	printf("\t\tImplement Gauss Elimination with pivoting.\n\n");
	system("color 71");
	int i, j, p, n;
	double a[10][10], b, c, d, x1, x2, x3, temp, max;
	printf("Enter total number of unknown variables: ");

	scanf("%d", &n);
	printf("Enter the augmented matrix of AX=C equation (rowwise) : \n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%lf", &a[i][j]);
		}
	}
	max = a[0][0];
	if (a[1][0] >= max)
		p = 1;
	if (a[2][0] >= max)
		p = 2;
	for (j = 0; j <= n; j++)
	{
		temp = a[p][j];
		a[p][j] = a[0][j];
		a[0][j] = temp;
	}

	b = a[1][0];
	c = a[2][0];
	d = a[0][0];
	for (j = 0; j <= i; j++)
	{
		a[1][j] = (a[1][j] - ((b / (double)d) * a[0][j]));
		a[2][j] = (a[2][j] - ((c / (double)d) * a[0][j]));
	}
	b = a[2][1];
	d = a[1][1];
	for (j = 0; j <= n; j++)
	{
		a[2][j] = (a[2][j] - ((b / (double)d) * a[1][j]));
	}

	x3 = (a[2][3] / (double)a[2][2]);
	x2 = ((a[1][3] - (a[1][2] * x3)) / (double)a[1][1]);
	x1 = ((a[0][3] - (a[0][1] * x2) - (a[0][2] * x3)) / (double)a[0][0]);
	printf("The Solutions are:\n");
	printf("\nx1=%lf\n\n", x1);
	printf("x2=%lf\n\n", x2);
	printf("x3=%lf\n\n", x3);
	return 0;
}
