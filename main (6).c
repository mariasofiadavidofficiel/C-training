/******************************************************************************
Exercise 2-C: Reading Multiple Values

Read a student's name (char[50]), age (int), and GPA (float) in one scanf call.
Print a formatted report card.
scanf("%s %d %f", name, &age, &gpa);
Test: Alice 20 3.85 → Student: Alice | Age: 20 | GPA: 3.85
*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float gpa;
    printf("Enter name, age, GPA [for example: Alice 20 3.85 ] : \n");
    scanf("%s %d %f", name, &age, &gpa);
    printf("Student: %s | Age: %d | GPA: %.2f", name, age, gpa);
    return 0;
}