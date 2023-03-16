#include <stdio.h>
int main () {
    float d_km, d_f;
    printf("please enter the distance in KM:");
    scanf("%f", &d_km);
    d_f = d_km*3.3;
    printf("your distanc  in foots equals about %f", d_f);
    return 0;
}