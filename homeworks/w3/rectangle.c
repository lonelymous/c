#include <stdio.h>

int perimeter(int a, int b)
{
    return 2*(a+b);
}

int area(int a, int b)
{
    return a*b;
}

int main(int argc, char const *argv[]) {
    int a;
    int b;
    printf("Add meg a téglalap oldalait:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("A téglalap kerülete: %d\n", perimeter(a, b));
    printf("A téglalap területe: %d\n", area(a, b));

    return 0;
}