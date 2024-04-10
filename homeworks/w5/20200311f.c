#include <stdio.h>

int char_count(char str[], char c)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char c;
    printf("Kérem, adjon meg egy karaktert: ");
    scanf("%c", &c);

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("The character %c occurs %d times in the string.\n", c, char_count(str, c));
    return 0;
}
