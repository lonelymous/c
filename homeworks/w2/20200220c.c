#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n1;
    int n2;
    printf("Adj meg egy egész számot: ");
    scanf("%d", &n1);
    printf("Adj meg egy másik egész számot: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d>%d\n", n1, n2);
    } else if (n1 < n2)
    {
        printf("%d<%d\n", n1, n2);
    } else
    {
        printf("%d=%d\n", n1, n2);
    }

    return 0;
}
