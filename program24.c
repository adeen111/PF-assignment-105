#include <stdio.h>

int main()
 {
    float total, average,sub1, sub2, sub3, sub4, sub5;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    printf("\nTotal Marks: %f\n", total);
    printf("Average Marks: %f\n", average);

    return 0;
}