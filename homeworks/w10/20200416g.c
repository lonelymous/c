#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Durstenfeld shuffle algoritmus implementációja
void shuffle(int n, int tomb[]) {
    srand(time(NULL)); // Kezdőérték beállítása az időfüggő seed-re

    // A tömb elemeit megkeverjük
    for (int i = n - 1; i > 0; i--) {
        // Véletlenszerű index generálása az i és 0 között
        int j = rand() % (i + 1);

        // Csere az i-edik és a j-edik elem között
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main() {
    // Példa tömb létrehozása és inicializálása
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    // Kevert tömb kiíratása előtt
    printf("Kevert tomb:\n");
    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    // Tömb keverése
    shuffle(meret, tomb);

    // Kevert tömb kiíratása
    printf("Keveres utan:\n");
    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}
