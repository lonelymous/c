#include <stdio.h>

int main(int argc, char const *argv[]) {
    int height;
    printf("Kérem adjon meg egy pozitív páratlan számot (gyémánt magassága): ");
    scanf("%d", &height);

    // Draw the top half of the diamond
    for (int i = 1; i <= height; i += 2) {
        for (int j = 0; j < (height - i) / 2; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    // Draw the bottom half of the diamond
    for (int i = height - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (height - i) / 2; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
