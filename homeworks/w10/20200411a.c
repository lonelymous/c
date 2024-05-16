#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 12

// Függvény az erős jelszó generálásához
void generate_password() {
    char password[MAX_LENGTH + 1] = ""; // +1 a lezáró nullterminátor miatt

    char lower_chars[] = "abcdefghijklmnopqrstuvwxyz";
    char upper_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special_chars[] = ".,;'";

    // Vegyesen szerepeljenek a karakterek
    char *char_sets[] = {lower_chars, upper_chars, digits, special_chars};

    // Egyes kategóriákból véletlenszerűen válasszunk karaktereket
    for (int i = 0; i < 4; i++) {
        int char_index = rand() % (sizeof(char_sets[i]) - 1);
        password[i] = char_sets[i][char_index];
    }

    // A maradék helyekre vegyesen szerepeljenek a karakterek
    for (int i = 4; i < MAX_LENGTH; i++) {
        int set_index = rand() % 4;
        int char_index = rand() % (sizeof(char_sets[set_index]) - 1);
        // Ellenőrizzük, hogy az azonos típusú karakterek ne legyenek egymás mellett
        while (set_index == i - 1 && password[i - 1] == char_sets[set_index][char_index]) {
            char_index = rand() % (sizeof(char_sets[set_index]) - 1);
        }
        password[i] = char_sets[set_index][char_index];
    }

    password[MAX_LENGTH] = '\0'; // Lezárjuk a sztringet nullterminátorral

    printf("%s\n", password);
}

int main() {
    srand(time(NULL)); // Inicializáljuk a random generátort

    printf("Az erős jelszó: ");
    generate_password();

    return 0;
}
