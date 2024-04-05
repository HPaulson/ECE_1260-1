/*
Hunter Paulson
ECE 1261
Lab 7

- Random nums for range & Estimating pi
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int trial() {
    double point[2];
    point[0] = (double)rand() / (double)RAND_MAX;
    point[1] = (double)rand() / (double)RAND_MAX;

   double distance = sqrt(pow(point[0], 2) + pow(point[1], 2));
   if (distance <= 1) {
       return 1;
   } else {
       return 0;
   }

}

int main(void) {
    srand(time(NULL));
    double pass = 0;

    double trials = 100000000;
    for (int i = 0; i < trials; i++) {
        pass += trial();
    }

    double A = pass / trials;
    double pi = 4 * A;
    printf("Estimate of pi: %f\n", pi);

    return 0;
}