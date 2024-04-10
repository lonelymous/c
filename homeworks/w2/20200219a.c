#include <stdio.h>

int main(int argc, char const *argv[]) {
    int number;
    int sum = 0;
    printf("Kérem adjon meg egy pozitív egész számot (0 végjelig):\n");
    do
    {     
        printf("Kérek egy számot: ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);
    printf("A beolvasott számok összege: %d\n", sum);

    return 0;
}
