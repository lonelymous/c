#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10
#define MIN_VALUE 10
#define MAX_VALUE 99

// Függvény definíciója, amely több értéket "ad vissza" mutatók segítségével
void calculateStatistics(int *array, int size, int *min, int *max, float *average) {
    // Kezdeti értékek beállítása a minimumnak és a maximumnak
    *min = array[0];
    *max = array[0];
    *average = 0;

    // Összegzés a tömb elemein
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        // Minimum keresése
        if (array[i] < *min) {
            *min = array[i];
        }
        // Maximum keresése
        if (array[i] > *max) {
            *max = array[i];
        }
        // Összegzés
        sum += array[i];
    }

    // Átlag kiszámítása
    *average = (float)sum / size;
}

int main() {
    // Random generátor inicializálása
    srand(time(NULL));

    // Tömb létrehozása és feltöltése random számokkal
    int numbers[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        numbers[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    }

    // Tömb elemeinek kiírása
    printf("A tomb elemei: ");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%d%s", numbers[i], (i == ARRAY_SIZE - 1) ? "\n" : ", ");
    }

    // Változók inicializálása a visszaadott értékeknek
    int min, max;
    float average;

    // Függvény meghívása a statisztikák kiszámítására
    calculateStatistics(numbers, ARRAY_SIZE, &min, &max, &average);

    // Eredmények kiírása
    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek atlag: %.1f\n", average);

    return 0;
}
