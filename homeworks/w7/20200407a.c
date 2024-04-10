#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Struktúra az eredmények tárolására
struct Eredmenyek {
    int legkisebb;
    int legnagyobb;
    float atlag;
};

// Függvény a legkisebb, legnagyobb és átlag visszaadására
struct Eredmenyek kiszamol(int tomb[], int meret) {
    struct Eredmenyek eredmeny;

    // Legkisebb és legnagyobb inicializálása a tömb első elemével
    eredmeny.legkisebb = tomb[0];
    eredmeny.legnagyobb = tomb[0];
    eredmeny.atlag = 0;

    // Összegzés az átlaghoz
    for (int i = 0; i < meret; ++i) {
        if (tomb[i] < eredmeny.legkisebb)
            eredmeny.legkisebb = tomb[i];
        if (tomb[i] > eredmeny.legnagyobb)
            eredmeny.legnagyobb = tomb[i];
        eredmeny.atlag += tomb[i];
    }

    // Átlag számítása
    eredmeny.atlag /= meret;

    return eredmeny;
}

int main() {
    // Random generátor inicializálása
    srand(123); // Azonos random számokhoz minden futtatásnál ugyanaz az inicializáló érték szükséges

    // Tömb feltöltése random számokkal
    int tomb[10];
    for (int i = 0; i < 10; ++i) {
        tomb[i] = rand() % 90 + 10; // [10, 99] zárt intervallum
    }

    // Tömb elemeinek kiíratása
    printf("A tomb elemei: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d", tomb[i]);
        if (i != 9)
            printf(", ");
    }
    printf("\n");

    // Eredmények számolása
    struct Eredmenyek eredmenyek = kiszamol(tomb, 10);

    // Eredmények kiíratása
    printf("Legkisebb elem: %d\n", eredmenyek.legkisebb);
    printf("Legnagyobb elem: %d\n", eredmenyek.legnagyobb);
    printf("Az elemek atlaga: %.1f\n", eredmenyek.atlag);

    return 0;
}
