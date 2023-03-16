#include <stdio.h>
int main () {
    float temp_f, temp_c;
    printf("please input the temp in fahrenhiet:");
    scanf("%f", &temp_f);
    temp_c = (5*(temp_f-32))/9;
    printf("the temprature in celesius is about %f", temp_c);
    return 0;
}