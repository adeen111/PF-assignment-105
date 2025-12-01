#include<stdio.h>
int main()
{
    float r, h, volume;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    volume = 3.1417 * r * r * h;
    printf("Volume = %f\n", volume);

    return 0;
}