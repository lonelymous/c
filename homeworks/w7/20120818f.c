#include <stdio.h>

int main() {
    int sum_of_squares = 0;
    int square_of_sum = 0;
    int i;

    // Számítsuk ki az első száz természetes szám négyzetösszegét
    for (i = 1; i <= 100; i++) {
        sum_of_squares += i * i;
    }

    // Számítsuk ki az első száz természetes szám összegét
    for (i = 1; i <= 100; i++) {
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum; // négyzetre emeljük az összeget

    // Különbség kiszámítása
    int difference = square_of_sum - sum_of_squares;

    printf("Az első száz természetes szám összegének a négyzete és az első száz természetes szám négyzetösszege közti különbség: %d\n", difference);

    return 0;
}
