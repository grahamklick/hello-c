#include <stdio.h>

int main(void) {
    int age = 28;
    int year = 2026;
    char grade = 'A';
    float height = 5.9f;
    double temperature = 99.95;

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.1f\n", height);
    printf("Year: %d\n", year);
    printf("Temperature: %.2f\n", temperature);

    return 0;
}