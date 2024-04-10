#include <stdio.h>

int array_index(int array[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int size = 0;

    printf("Add meg egy tömb méretet: ");
    scanf("%d", &size);

    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("Add meg a tömb %d. elemét: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int number;
    printf("Adj meg egy számot: ");
    scanf("%d", &number);

    int result = array_index(numbers, size, number);

    if (result != -1)
    {
        printf("A megadott szám indexe: %d\n", result);
    }
    else
    {
        printf("A tömb nem tartalmazza a megadott számot.\n");
    }

    return 0;
}