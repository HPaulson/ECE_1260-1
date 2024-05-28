#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define FS 6000.0 // sampling frequency

double pi, ratio;

void play(FILE *fp1, int key, int duration)
{

    double w = (2 * pi * 440 * pow(ratio, key - 49)) / FS;

    int n = (duration / 10.0) * FS;

    for (int i = 0; i < n; ++i)
        fprintf(fp1, "%g\n", sin(w * i)); // + 0.5*sin(2*w*i) + 0.25*sin(3*w*i) );
}

int main(void)
{
    pi = 4 * atan(1);

    ratio = pow(2, 1.0 / 12.0);
    FILE *fp1 = fopen("plot.data", "w+");

    play(fp1, 44, 6);
    play(fp1, 42, 6);
    play(fp1, 40, 12);

    play(fp1, 44, 6);
    play(fp1, 42, 6);
    play(fp1, 40, 12);

    play(fp1, 47, 6);
    play(fp1, 45, 6);
    play(fp1, 45, 6);

    play(fp1, 44, 12);

    play(fp1, 44, 6);
    play(fp1, 42, 6);
    play(fp1, 40, 12);

    play(fp1, 44, 6);
    play(fp1, 42, 6);
    play(fp1, 40, 12);

    fclose(fp1);
    return 0;
}