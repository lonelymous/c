#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {

    if (argc == 1) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char* filename = argv[1];

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    char line[256];
    int capacity = 10;  // Kezdeti kapacitás
    int count = 0;

    // Dinamikus memória foglalása az egész számoknak
    int *numbers = (int*)malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        perror("Memória foglalási hiba");
        return 1;
    }

    // Olvassuk ki a fájlt
    int num;
    while (fscanf(file, "%d", &num) == 1) {
        // Ellenőrizze, hogy van-e szükség több memóriára
        if (count == capacity) {
            capacity *= 2;
            int *temp = realloc(numbers, capacity * sizeof(int));
            if (temp == NULL) {
                perror("Memória újrafoglalási hiba");
                free(numbers);
                return 1;
            }
            numbers = temp;
        }
        // Hozzáadja a számot a dinamikus tömbhöz
        numbers[count] = num;
        count++;
    }
    fclose(file);

    // Rendezés
    qsort(numbers, count, sizeof(int), compare);

    // Kiírás
    for (int i = 0; i < count; i++) {
        printf("%d\n", numbers[i]);
    }

    // Dinamikus tömb felszabadítása
    free(numbers);
}