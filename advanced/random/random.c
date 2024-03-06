#include <stdio.h>
#include <stdlib.h>   // A random-hoz szükséges könyvtár
#include <time.h>     // A gép óra alapján generál random számot, ezért kell neki ez a könyvtár is.

int main() {
    // Seed the random number generator with the current time
    // Az idő alapján megtölti a random generátort.
    srand(time(NULL));
    //Random számot generál
    int random1 = rand();
    //Random számot generál 0 és 49 között
    int random2 = rand() % 50;
    // Generate a random number between 30 and 90
    int random3 = rand() % (90 - 30 + 1);
    
    
    // Print the random number
    printf("Random szám: %d\n", random1);
    printf("Random szám 0-50 között: %d\n", random2);
    printf("Random szám 30 és 90 között: %d\n", random3);

    return 0;
}