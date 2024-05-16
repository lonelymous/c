#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isInArray(int *arr, int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1; // Igaz, ha a szám már benne van a tömbben
        }
    }
    return 0; // Hamis, ha nem találtuk meg a számot a tömbben
}

int main(int argc, char *argv[]) {
    int N, lower, upper;
    printf("Hány db random számot kérsz?\n");
    scanf("%d", &N);
    printf("Alsó határ: ");
    scanf("%d", &lower);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &upper);

    if (upper - lower + 1 < N) {
        printf("Hiba: A megadott intervallum nem fedezi a kívánt darabszámot!\n");
        return -1;
    }

    int *numbers = (int *)malloc(N * sizeof(int));
    if (numbers == NULL) {
        printf("Memória foglalási hiba!");
        exit(1);
    }

        for (int i = 0; i < N; i++) {
        int num;
        do {
            num = (rand() % (upper - lower + 1)) + lower;
        } while (isInArray(numbers, i, num)); // Ellenőrzi, hogy az előfordul-e már a tömbben

        numbers[i] = num;
    }

    // Rendezi a tömböt
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("A generált számok:");
    for (int i = 0; i < N; i++) {
        printf(" %d", numbers[i]);
    }
    printf("\n");

    free(numbers);
}