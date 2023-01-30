// Program to implement Gauss Seidal Method.
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define ESP 0.0001
#define X1(x2, x3) ((11 + 2 * (x2) - (x3)) / 6)
#define X2(x1, x3) ((5 + 2 * (x1)-2 * (x3)) / 7)
#define X3(x1, x2) ((-1 - (x1)-2 * (x2)) / -5)

void main()
{
   printf("\n\t\t===================================================\n");

   printf("\t\tImplement Gauss Seidal Method \n\n");
   system("color 71");

   printf("\n\nThe functions are as: \n 6x1 - 2x2 + x3 = 11\n-2x1 + 7x2 + 2x3 = 5\nx1 + 2x2 - 5x3 = -1\n\n");
   double x1 = 0, x2 = 0, x3 = 0, y1, y2, y3;
   int i = 0;

   printf("\n x1\t\t x2\t\t x3\n");

   printf("\n%f\t%f\t%f", i, x1, x2, x3);
   do
   {
      y1 = X1(x2, x3);
      y2 = X2(y1, x3);
      y3 = X3(y1, y2);
      if (fabs(y1 - x1) < ESP && fabs(y2 - x2) < ESP && fabs(y3 - x3) < ESP)
      {

         printf("\n\nx1 = %.3lf", y1);
         printf("\n\nx2 = %.3lf", y2);
         printf("\n\nx3 = %.3lf", y3);
         i = 1;
      }
      else
      {
         x1 = y1;
         x2 = y2;
         x3 = y3;
         printf("\n%f\t%f\t%f", x1, x2, x3);
      }
   } while (i != 1);

   getch();
}
