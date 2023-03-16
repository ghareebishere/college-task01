#include <stdio.h>
int main () {
    float temp_f, temp_c;
    printf("please input the temp in celsius:");
    scanf("%f", &temp_c);
    temp_f = (9*(temp_c / 5)) + 32;
    printf("the temprature in celesius is about %f", temp_f);
    return 0;
}