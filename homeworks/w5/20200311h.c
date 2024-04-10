#include <stdio.h>

void line(char c, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{

    printf("Hello\n");
    line('-', 40);
    printf("World\n");

    return 0;
}
