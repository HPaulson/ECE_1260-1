/*
Hunter Paulson
Lab 5
ECE 1261
*/

#include <stdio.h>
#include <math.h>

double FtoC(double F) { return ((F - 32) * 5 / 9); };
double CtoF(double C) { return ((C * 9 / 5) + 32); };
double WindChill(double temp, double ws) {
    return (35.74 + 0.6215 * temp - 35.75 * pow(ws, 0.16) + 0.4275 * temp * pow(ws, 0.16)); 
};

int main(void)
{

    printf("(1) Convert from Fahrenheit to Celsius\n");
    printf("(2) Convert from Celsius to Fahrenheit\n");
    printf("(3) Calculate wind chill\n");
    printf("(4) Exit program\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Enter the temperature in Fahrenheit: ");
        double temp;
        scanf("%lf", &temp);
        printf("\n%g F = %g C\n", temp, FtoC(temp));
        break;
    }
    case 2:
    {
        printf("Enter the temperature in Celcius: ");
        double temp;
        scanf("%lf", &temp);
        printf("\n%g C = %g F\n", temp, CtoF(temp));
        break;
    }
    case 3:
    {
        double ws, temp;
        printf("Enter the wind speed in mph: ");
        scanf("%lf", &ws);
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &temp);

        if (ws < 3 || temp > 50)
        {
            printf("\nWind chill is not defined for these conditions.\n");
        }
        else
        {
            printf("\nAir temp: %g F, Wind speed: %g mph\n", temp, ws);
            printf("Calculated Wind Chill = %g F\n", WindChill(temp, ws));
        }

        break;
    }
    case 4:
    {
        return 0;
    }
    default:
    {
        printf("\nInvalid choice.\n");
        break;
    }
    }
}