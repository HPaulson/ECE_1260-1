/*
Hunter Paulson
ECE 1261
Lab 8 - April 5th 2024

The learning objectives for this lab are:
1. continue to learn how to work with 1-D arrays and solve the normalization problem
2. continue to learn to develop multiple functions that will be used in the solution of a single
problem, i.e. modularity in programming
*/
#include <stdio.h>

double min(double arr[], int length)
{
    double min;
    for (int i = 0; i < length; i++)
    {
        if (!min || arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

double max(double arr[], int length)
{
    double max;
    for (int i = 0; i < length; i++)
    {
        if (!max || arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void printArray(double arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%g ", arr[i]);
    }
}

void normalize(double arr[], int length)
{
    double maxValue = max(arr, length);
    double minValue = min(arr, length);

    for (int i = 0; i < length; i++)
    {
        arr[i] = (arr[i] - minValue) / (maxValue - minValue);
    }
}

int main(void)
{
    double Val[100] = {1.0, 2.0, 3.0, 4.0, 0, -1.0, -2.0, -3.0, -4.0, -5.0};
    printf("Original Values:\n");
    printArray(Val, 10);
    normalize(Val, 10);
    printf("\nNoramlized Values:\n");
    printArray(Val, 10);

    return 0;
}