#include <stdio.h>

int main()
{
    int integral_part;
    float fractional_part;
    float number = 15.58971;

    integral_part = (int)number;          
    fractional_part = number - integral_part;

    printf("Number = %f\n", number);
    printf("Integral part = %d\n", integral_part);
    printf("Fractional part = %f\n", fractional_part);

    return 0;
}
