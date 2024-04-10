#include <stdio.h>

int main(int argc, char const *argv[]) {
    int number;
    int counter = 0;

    printf("Kérem adjon meg egy pozitív egész számot (0 végjelig):\n");
    do
    {     
        printf("Kérek egy számot: ");
        scanf("%d", &number);

        if (number > 0)
        {
            counter++;
        }
    } while (number != 0);
    
    printf("Pozitiv elemek száma: %d\n", counter);

    return 0;
}
