#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    printf("Adj meg egy pozitív egész számot: ");
    scanf("%d", &n);

    printf("A(z) %d-től %d-ig néggyel osztható számok:\n", 1, n);
    for (int i = 1; i <= n; ++i) {
        if (i % 4 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
