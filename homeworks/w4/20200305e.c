#include <stdio.h>

int is_even(int n)
{
    return n % 2 == 0;
}

int is_odd(int n)
{
    return is_even(n) == 0;
}

int main(int argc, char const *argv[])
{
    int number;

    printf("Adj meg egy számot: ");
    scanf("%d", &number);

    if (is_even(number))
    {
        printf("A megadott szám páros.\n");
    }
    else
    {
        printf("A megadott szám nem páros.\n");
    }

    if (is_odd(number))
    {
        printf("A megadott szám páratlan.\n");
    }
    else
    {
        printf("A megadott szám nem páratlan.\n");
    }
    

    return 0;
}
