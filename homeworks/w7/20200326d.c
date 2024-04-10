#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // Initialize random seed
    srand(time(NULL));

    int random_numbers_count = 0;
    int lower_bound = 0;
    int upper_bound = 0;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &random_numbers_count);

    printf("Alsó határ: ");
    scanf("%d", &lower_bound);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &upper_bound);

    printf("A generált számok: ");

    for (int i = 0; i < random_numbers_count; i++)
    {
        printf("%d ", rand() % (upper_bound - lower_bound + 1) + lower_bound);
    }

    return 0;
}