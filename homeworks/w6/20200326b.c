#include <stdio.h>

int main(int argc, char const *argv[]) {
    int number;
    int size = 1024;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = 0;
    }
    

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    do
    {
        printf("Szám: ");
        scanf("%d", &number);

        if (number < 1 || number > 99)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue;
        }

        if (number > 0)
        {
            numbers[number]++;
        }
    } while (number != 0);

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
