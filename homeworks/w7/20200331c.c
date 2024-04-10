#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Függvény az erős jelszó ellenőrzésére
bool eros_jelszo(char *jelszo) {
    int hossz = strlen(jelszo);
    bool tartalmaz_kisbetut = false;
    bool tartalmaz_nagybetut = false;
    bool tartalmaz_szamot = false;

    // Ellenőrizzük a jelszó hosszát
    if (hossz < 8) {
        return false;
    }

    // Ellenőrizzük, tartalmaz-e kis- és nagybetűt, valamint számot
    for (int i = 0; i < hossz; i++) {
        if (islower(jelszo[i])) {
            tartalmaz_kisbetut = true;
        } else if (isupper(jelszo[i])) {
            tartalmaz_nagybetut = true;
        } else if (isdigit(jelszo[i])) {
            tartalmaz_szamot = true;
        }
    }

    // Az erős jelszó feltételeinek teljesülése
    return tartalmaz_kisbetut && tartalmaz_nagybetut && tartalmaz_szamot;
}

int main() {
    char jelszo[100];

    // Fő program: jelszavak bekérése és ellenőrzése
    while (1) {
        printf("Adj meg jelszavakat '*' végjelig!\nJelszó: ");
        scanf("%s", jelszo);

        // Ha a felhasználó '*' karaktert ad meg, kilépünk a ciklusból
        if (strcmp(jelszo, "*") == 0) {
            break;
        }

        // Jelszó ellenőrzése és eredmény kiírása
        if (eros_jelszo(jelszo)) {
            printf("erős jelszó\n");
        } else {
            printf("gyenge jelszó\n");
        }
    }

    return 0;
}
