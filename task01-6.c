#include <stdio.h>

int main()
{
    float cm=1000, meter, km;

    /* Input length in centimeter from user */
    printf("Enter length in centimeter:\n ");
    scanf("%f", &cm);

    /* Convert centimeter into meter and kilometer */
    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %f km\n", km);

    return 0;
}