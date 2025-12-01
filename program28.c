#include <stdio.h>

int main() 
{
    float a, b, c, disc;

    printf("Enter values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = (b * b)-4 * a * c;

    printf("Value of disc = %f\n", disc);

    return 0;
}