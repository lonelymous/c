#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n = 1000;

    // Calculate the sum of integers that are multiples of 3 or 5
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Azon %d-nél kisebb számok összege, melyek 3-nak vagy 5-nek a többszörösei: %d\n", n, sum);

    return 0;
}
