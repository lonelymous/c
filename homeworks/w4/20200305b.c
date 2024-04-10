#include <stdio.h>

int array_min(int array[], int size)
{
    int min = array[0];
    for (size_t i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int array_max(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
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

    printf("A tömb legkisebb eleme: %d\n", array_min(numbers, size));
    printf("A tömb legnagyobb eleme: %d\n", array_max(numbers, size));

    return 0;
}
