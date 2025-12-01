#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float height;
    char gender;


    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height (in feet or cm): ");
    scanf("%f", &height);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender); 

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Gender: %c\n", gender);

    return 0;
}