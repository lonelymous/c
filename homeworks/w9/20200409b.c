#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input) {
    // Ellenőrizze, hogy a sztring hossza legalább 1 karakter
    if (*input == '\0')
        return 0;

    // Ellenőrizze, hogy az első karakter betű vagy '_'
    if (!isalpha(*input) && *input != '_')
        return 0;

    // Ellenőrizze a többi karaktert
    while (*input != '\0') {
        if (!isalnum(*input) && *input != '_')
            return 0;
        input++;
    }

    return 1;
}

int main(int argc, char *argv[]) {
    char input[100];

    printf("Adj meg sztringeket '*' végjelig!\n");

    while (1) {
        printf("Input: ");
        scanf("%s", input);

        if (input[0] == '*')
            break;

        if (is_valid_c_identifier(input))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}