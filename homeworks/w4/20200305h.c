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
        if (numbers[i] < 0)
        {
            numbers[i] = abs(numbers[i]);
        }
        printf("%d\n", numbers[i]);
    }

    return 0;
}
