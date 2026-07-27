#include <stdio.h>

int main(void) {
    int age;
    int favorite_number;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Your favorite nuber is ");
    scanf("%d", &favorite_number);

    printf("Next year you will be %d year old.\n", age + 1);

    return 0;
}