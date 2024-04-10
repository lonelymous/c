#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Calculate the sum of integers from 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    // Print the result
    printf("Az egész számok összege 1-től 100-ig: %d\n", sum);

    return 0;
}
