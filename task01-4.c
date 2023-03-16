#include <stdio.h>
#define PI 3.14
int main (){
    int diam, radius;
    float cum, area;
    printf("please enter the diameter of the circle:\n");
    scanf("%d", &diam);
    radius = diam/2;
    cum =PI*diam;
    area =PI*radius*radius;
    printf("your cumference is: %0.2f \n", cum);
    printf("your area is: %0.2f", area);
    return 0;
}
