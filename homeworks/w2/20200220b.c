#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    printf("Adj meg egy egész számot: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
