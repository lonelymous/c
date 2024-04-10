#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int size = 0;

    printf("Add meg egy tömb méretet: ");
    scanf("%d", &size);

    int numbers[size];
    int numbers_absolute[size];
    for (int i = 0; i < size; i++)
    {
        printf("Add meg a tömb %d. elemét: ", i + 1);
        int number;
        scanf("%d", &number);
        numbers[i] = number;
        numbers_absolute[i] = abs(number);
    }

    printf("A bevitt számok abszolútértékei: ");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            printf("%d, ", numbers_absolute[i]);
        }
        else
        {
            printf("%d\n", numbers_absolute[i]);
        }
    }

    printf("A megadott számok: ");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            printf("%d, ", numbers[i]);
        }
        else
        {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}
