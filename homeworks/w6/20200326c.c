#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char words[MAX_LENGTH][MAX_LENGTH];
    char word[MAX_LENGTH];
    int wordCount = 0;
    int maxLength = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    // Szavak beolvasása
    while (1) {
        printf("Szó: ");
        fgets(word, MAX_LENGTH, stdin);

        // Ellenőrzés, hogy nem '*' a szó
        if (word[0] == '*' && (word[1] == '\n' || word[1] == '\0'))
            break;

        // Szó hosszának ellenőrzése
        int len = strlen(word);
        if (len > 0 && (word[len - 1] == '\n' || word[len - 1] == '\0')) {
            word[len - 1] = '\0'; // Újsor karakter törlése
            len--;
        }

        // Másolás a tömbbe
        strcpy(words[wordCount], word);
        wordCount++;

        // Max hossz frissítése
        if (len > maxLength)
            maxLength = len;
    }

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", wordCount, maxLength);

    return 0;
}
