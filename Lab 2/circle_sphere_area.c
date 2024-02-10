/*
Hunter Paulson
Lab 2 - Modified chapter1_1.c
------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>
#define PI (4 * atan(1))

int main(void)
{
       double x1 = 1,
              y1 = 5,
              x2 = 4,
              y2 = 7,
              side_1 = x2 - x1,
              side_2 = y2 - y1,
              radius = sqrt(side_1 * side_1 + side_2 * side_2),
              area = PI * pow(radius, 2),
              surface_area = 4 * PI * pow(radius, 2);

       printf("----------------------------------------\n");
       printf("\nPART A: AREA OF CIRCLE:\nWhen x1=%g, y1=%g, x2=%g, y2=%g, the area of the circle is %g\n", x1, y1, x2, y2, area);
       printf("\nPART B: SURFACE AREA OF SPHERE:\nThe surface area of the sphere is %g\n",surface_area);
       printf("\n----------------------------------------\n");

       return 0;
}
