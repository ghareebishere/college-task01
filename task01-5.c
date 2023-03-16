#include <stdio.h>

int main()
{
    float length, width, perimeter, area;

    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate perimeter of rectangle */
    perimeter = 2 * (length + width);
    area = length * width;

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units ", perimeter);
    printf("area of rectangle = %f units squared ", area);
    return 0;
}