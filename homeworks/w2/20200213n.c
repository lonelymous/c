#include <stdio.h>

int main(int argc, char const *argv[]) {
    int number;
    int positiveCounter = 0;
    int negativeCounter = 0;
    
    printf("Kérem adjon meg egy pozitív egész számot (0 végjelig):\n");
    do
    {     
        printf("Kérek egy számot: ");
        scanf("%d", &number);

        if (number > 0)
        {
            positiveCounter++;
        } else if (number < 0)
        {
            negativeCounter++;
        }

    } while (number != 0);

    printf("Pozitiv elemek száma: %d\n", positiveCounter);
    printf("Negatív elemek száma: %d\n", negativeCounter);

    return 0;
}
