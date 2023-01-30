// Program to implement Gauss Elimination Method.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 10

int main()
{

	printf("\n\t\t===================================================\n");

	printf("\t\tImplement Gauss Elimination Method\n\n");
	system("color 71");

	float a[SIZE][SIZE], x[SIZE], ratio;
	int i, j, k, n;

	printf("Enter total number of unknown variables: ");
	scanf("%d", &n);
	printf("Enter the augmented matrix of AX=C equation (rowwise) : ");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n + 1; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	for (i = 1; i <= n - 1; i++)
	{
		if (a[i][i] == 0.0)
		{
			printf("Mathematical Error!");
			exit(0);
		}
		for (j = i + 1; j <= n; j++)
		{
			ratio = a[j][i] / a[i][i];

			for (k = 1; k <= n + 1; k++)
			{
				a[j][k] = a[j][k] - ratio * a[i][k];
			}
		}
	}
	x[n] = a[n][n + 1] / a[n][n];

	for (i = n - 1; i >= 1; i--)
	{
		x[i] = a[i][n + 1];
		for (j = i + 1; j <= n; j++)
		{
			x[i] = x[i] - a[i][j] * x[j];
		}
		x[i] = x[i] / a[i][i];
	}
	printf("\n The solutions are : \n");
	for (i = 1; i <= n; i++)
	{
		printf("x[%d] = %0.3f\n", i, x[i]);
	}
	getch();
	return (0);
}
// Enter total number of unknown variables: 3
// Enter the augmented matrix of AX=C equation (rowwise)
// 20 , 15 , 10 , 45
//-3 , -2.249 , 7 , 1.751
// 5 , 1 , 5 , 9
