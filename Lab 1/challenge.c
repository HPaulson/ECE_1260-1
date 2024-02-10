/*
Hunter Paulson
Modifying chapter1_1.c
------------------------------------------------------------                          
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
   double x1=1e200, y1=5e200, x2=4e200, y2=7e200,
          side_1, side_2, distance;

   side_1 = x2 - x1;
   side_2 = y2 - y1;

   double scale = fabs(side_1) > fabs(side_2) ? fabs(side_1) : fabs(side_2);
    side_1 /= scale;
    side_2 /= scale;

   distance = sqrt(side_1*side_1 + side_2*side_2);

   distance *= scale;

   printf("The distance between the two points is "
          "%5.2g \n",distance);

   return 0;
}