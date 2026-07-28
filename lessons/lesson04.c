#include <stdio.h>

int main(void) {
    int score;

    printf("Enter test score: ");
    scanf("%d", &score);

    if (score >= 70) {
        printf("Passing\n");
    }

    if (score < 70) {
        printf("Failing\n");
    }

    return 0;
}