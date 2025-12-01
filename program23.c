#include <stdio.h>

int main()
{
    float radius, area, circumference;
    float pi = 3.1417;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area         = pi * radius * radius;      
    circumference = 2 * pi * radius;            

    printf("Area of circle = %f\n", area);
    printf("Circumference of circle = %f\n", circumference);

    return 0;
}