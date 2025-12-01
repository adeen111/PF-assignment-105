#include<stdio.h>
int main()
{
    int rollNo;
    float pf, ic, cg;
    float total, average;
    printf("Enter Roll Number ");
    scanf("%d", &rollNo);

    printf("Enter marks in Programming Fundamentals ");
    scanf("%f", &pf);

    printf("Enter marks in Introduction to Computing ");
    scanf("%f", &ic);

    printf("Enter marks in Computer Graphics ");
    scanf("%f", &cg);

    total = pf + ic + cg;
    average = total / 3;

    printf("\nResult\n");
    printf("Roll No: %d\n", rollNo);
    printf("Total Marks: %f\n", total);
    printf("Average Marks: %f\n", average);

    return 0;
}