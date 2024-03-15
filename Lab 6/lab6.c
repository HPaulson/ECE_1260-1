/*
Hunter Paulson
ECE 1261 - Lab 6
15 March 2024
*/

#include <stdio.h>
#include <math.h>
#define T 4
 

double waveSum(double t, double T1, double T2)
{
  return sin((2*M_PI*t) / T1) + sin((2*M_PI*t) / T2);
}

int main( void)
{
  // Open files in the project directory named plot1.data and plot2.data in write mode
  FILE *fp1 = fopen("plot1.data", "w+");
  FILE *fp2 = fopen("plot2.data", "w+");

  
  /****** START OF CHANGES ******/

for (double t = 0; t <= 10.0; t += 0.1)
  {
    fprintf(fp1, "%4.1f  %9.6f\n", t, sin((2*M_PI*t) / T));
    // printf("%4.1f  %9.6f\n", t, sin((2*M_PI*t) / 4));
  };

for (double t = 0; t <= 10.0; t += 0.1)
  {
    const double T1 = 10.0/3.0;
    const double T2 = 2.0;

    const double sum = waveSum(t, T1, T2);
    // printf("%4.1f  %9.6f\n", t, sum);
    fprintf(fp2, "%4.1f  %9.6f\n", t, sum);
  };



   
  /******** END OF CHANGES ******/
    
  // Flush file buffers and close our open files. 

  fclose(fp1);
  fclose(fp2);
  
  
  // Exit program
  return 0;
}