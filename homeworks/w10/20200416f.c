#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    int num = (rand() % (n - 0));
    return tomb[num];
}

int main(int argc, char *argv[]) {

    srand(time(NULL));

    int tomb[] = {1, 2, 3, 4, 5};

    printf("Random tömb elem: %d\n", choice((sizeof(tomb) / sizeof(int)), tomb));
}