/*
Hunter Paulson
ECE 1261 - Lab 3
*/
#include <stdio.h>
#include <math.h>


void partA(void) {
    // PART A: Fahrenheit to Celsius Conversion
    double degF = 60;
    double degC = (degF - 32) * 5 / 9;
    printf("PART A: FAHRENHEIT TO CELSIUS COMPUTATION\n");
    printf("60 F = %f C\n\n", degC);
    return;
}

void partB(void) {
    // PART B: Polynomial Computation
    double x = 2.85;
    double numr = (pow(x,2)*(x - 2))+(x-6.3);
    double denom = (x*(x+.05005)) - 3.14;
    double ans = (pow(x,3) - 2*pow(x,2) + x-6.3) / (pow(x,2)+.05005*x-3.14);
    double f = numr / denom;

    printf("PART B: POLYNOMIAL COMPUTATION\n");
    printf("f = %f\n", f);
    return;
}

int main(void) {
    partA();
    partB();

    return 0;
}