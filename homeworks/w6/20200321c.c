#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        return 1;
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    printf("A két szám összege: %d\n", n1 + n2);

    return 0;
}
