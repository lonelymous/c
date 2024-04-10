#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    return a + b > c && a + c > b && b + c > a;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    printf("Add meg a háromszög oldalait:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (valid_triangle(a, b, c))
    {
        printf("A háromszög megszerkeszthető.\n");
    }
    else
    {
        printf("A háromszög nem megszerkeszthető.\n");
    }

    return 0;
}
