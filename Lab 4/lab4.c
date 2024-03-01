/*
Hunter Paulson
Lab 4
A. Comparing e^pi & pi^e
B. Angle to Rad, it's sin & cos
C. 
*/

#include <math.h>
#include <stdio.h>
#define PI acos(-1)

 typedef struct Point {
    double x;
    double y;
    double z;
} Point;

int main(void) {
    // PART A

    printf("PART A\n");
    if (exp(PI) > pow(PI, exp(1))) {
        printf("e^PI is larger than PI^e\n");
    }
    else if (exp(PI) < pow(PI, exp(1))) {
        printf("PI^e is larger than e^PI\n");
    }

    // PART B

    printf("Enter an angle in degrees: \n");
    double angle;
    scanf("%lf", &angle);

    double radians = angle * (PI / 180);

    printf("PART B\n");
    printf("%g degrees is %lf radians\n", angle, radians);
    printf("sin(%lf) = %lf\n", radians, sin(radians));
    printf("cos(%lf) = %lf\n", radians, cos(radians));
    printf("sin^2(%lf) + cos^2(%lf) = %lf\n", radians, radians, pow(sin(radians), 2) + pow(cos(radians), 2));

    // PART C


   struct Point p = {
        p.x = 2.2,
        p.y = 5.5,
        p.z = 3.1
   };
   
   struct Point q = {
        q.x = 3.3,
        q.y = 7.7,
        q.z = 3.1
   };

   printf("PART C\n");
   double side_1 = q.x - p.x;
   double side_2 = q.y - p.y;
   double side_3 = q.z - p.z;
   double distance = sqrt(side_1*side_1 + side_2*side_2 + side_3*side_3);

   printf("Coordinates of p: (%g, %g, %g)\n", p.x, p.y, p.z);
   printf("Coordinates of q: (%g, %g, %g)\n", q.x, q.y, q.z);
   printf("The distance between the two points is %lf\n", distance);


    return 0;
}