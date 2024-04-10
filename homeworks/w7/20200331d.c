#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char szam[1000];
    printf("Szam: ");
    fgets(szam, sizeof(szam), stdin);
    
    int osszeg = 0;
    for (int i = 0; i < strlen(szam); i++) {
        if (szam[i] >= '0' && szam[i] <= '9') {
            osszeg += szam[i] - '0';
        }
    }
    
    printf("A szamjegyek osszege: %d\n", osszeg);
    
    return 0;
}
