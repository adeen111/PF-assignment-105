#include <stdio.h>
#define PI 3.1417     

int main()
{
float r, area;

printf("Enter radius: ");
scanf("%f", &r);

area = PI * r * r;    

printf("Area of circle = %f\n", area);

return 0;
}