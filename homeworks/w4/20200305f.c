#include <stdio.h>
#include <math.h>

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

    for (int i = 0; i < size; i++)
    {
        printf("%d", numbers[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
