#include <stdio.h>

int main(int argc, char const *argv[]) {
    int height;
    printf("Kérem adjon meg egy pozitív páratlan számot (magasság): ");
    scanf("%d", &height);

    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j < height-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}