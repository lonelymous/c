#include <stdio.h>

int is_array_arranged(int array[])
{
    for (size_t i = 0; i < (sizeof(&array) / sizeof(array[0])); i++)
    {
        printf("%d\n", array[i]);
        if (array[i] > array[i + 1])
        {
            return 0;
        }
    }
    return 1;
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

    if (is_array_arranged(numbers))
    {
        printf("A tömb rendezett.\n");
    }
    else
    {
        printf("A tömb nem rendezett.\n");
    }

    return 0;
}
