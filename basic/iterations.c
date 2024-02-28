#include <stdio.h>

int main() {
    // 
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    int j = 0;
    // 
    while (j < 3) {
        printf("While loop iteration %d\n", j + 1);
        j++;
    }

    return 0;
}
