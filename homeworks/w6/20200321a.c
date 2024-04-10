#include <stdio.h>

void fill_up(char array[]) {
    char c = 'a';
    for (int i = 0; i < 26; i++) {
        array[i] = c;
        c++;
    }
}

int main() {
    char angol_abeces_array[26];
    fill_up(angol_abeces_array);

    printf("Az angol ábécé kisbetűi: ");
    for (int i = 0; i < 26; i++) {
        printf("%c ", angol_abeces_array[i]);
    }
    printf("\n");

    return 0;
}
