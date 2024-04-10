#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int size = 1024;
    int numbers[size];

    for (int i = 0; i < 1024; i++)
    {
        numbers[i] = pow(2, i);
    }

    int sum = 0;

    for (int i = 0; i < 1023; i++)
    {
        sum += abs(numbers[i] - numbers[i + 1]);
    }

    printf("A számok összege: %d\n", sum);

    return 0;
}
