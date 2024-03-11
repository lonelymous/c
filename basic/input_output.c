#include <stdio.h>

int main() {
    // printf függvény használata
    printf("Printf függvény használata:\n");

    // Karakterláncok
    printf("1. Karakterláncok: %s\n", "Hello, World!");

    // Egész számok
    int integerNumber = 42;
    printf("2. Egész számok: %d\n", integerNumber);

    // Lebegőpontos számok
    float floatNumber = 3.14;
    printf("3. Lebegőpontos számok: %f\n", floatNumber);

    // Tudományos jelölés
    double scientificNumber = 6.0221409e23;
    printf("4. Tudományos jelölés: %e\n", scientificNumber);

    // Karakterek
    char character = 'A';
    printf("5. Karakterek: %c\n", character);

    // Speciális karakterek
    printf("6. Speciális karakterek: \\t (tabulátor), \\n (sortörés)\n");

    // Új sor karakter nélkül
    printf("7. Új sor karakter nélkül: Valami");
    printf(" valami más.\n");

    // printf formázási karakterek
    printf("8. Formázási karakterek:\n");
    printf("   - %%d: Egész számok\n");
    printf("   - %%f: Lebegőpontos számok\n");
    printf("   - %%e: Tudományos jelölés\n");
    printf("   - %%c: Karakterek\n");
    printf("   - %%s: Karakterláncok\n");
    printf("   - \\t: Tabulátor\n");
    printf("   - \\n: Sortörés\n\n");

    // scanf függvény használata
    printf("Scanf függvény használata:\n");

    int scannedInteger;
    printf("1. Egész szám beolvasása: ");
    scanf("%d", &scannedInteger);
    printf("   Beolvasott egész szám: %d\n", scannedInteger);

    float scannedFloat;
    printf("2. Lebegőpontos szám beolvasása: ");
    scanf("%f", &scannedFloat);
    printf("   Beolvasott lebegőpontos szám: %f\n", scannedFloat);

    double scannedDouble;
    printf("3. Dupla pontosságú lebegőpontos szám beolvasása: ");
    scanf("%lf", &scannedDouble);
    printf("   Beolvasott dupla pontosságú lebegőpontos szám: %lf\n", scannedDouble);

    return 0;
}
