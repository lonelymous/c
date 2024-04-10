#include <stdio.h>

int finc_char(char str[], char c)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    char c;
    printf("Kérem, adjon meg egy karaktert: ");
    scanf("%c", &c);

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int index = finc_char(str, c);
    if (index != -1)
    {
        printf("The character %c occurs at index %d in the string.\n", c, index);
    }
    else
    {
        printf("The character %c does not occur in the string.\n", c);
    }

    return 0;
}
