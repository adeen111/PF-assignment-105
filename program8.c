#include <stdio.h>
int main() 
{
     float f, c;
     printf("enter temp in fahrenheit");
     scanf("%f",&f);
     c = (5.0 / 9.0) * (f - 32);

     printf("Temperature in Celsius: %f\n", c);

    return 0;
}
