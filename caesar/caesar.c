#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool only_digits(char *key);
char rotate(char c, int n);
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");

        return 1;
    }

    if (only_digits(argv[1]) == false)
    {
        printf("invalid key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    char text[1000];
    char *textp = text;
    printf("plaintext:");
    fgets(textp, 1000, stdin);

    for (int x = 0; x < strlen(text); x++)
    {
        char c = rotate(text[x], key);
        if (x == 0)
        {
            printf("ciphertext:");
        }
        printf("%c", c);
        if (c == '\0')
        {
            printf("\n");
        }
    }
}
bool only_digits(char *key)
{
    int j = strlen(key);
    for (int i = 0; i < j; i++)
    {
        if (!isdigit(key[i]))
        {

            return false;
        }
    }
    return true;
}
char rotate(char pt, int n)
{
    int ci = 0;
    if (!isalpha(pt))
    {
        ci = pt;
    }
    else if (islower(pt))
    {
        pt = pt - 'a';
        ci = (pt + n) % 26;
        ci = ci + 'a';
    }
    else if (isupper(pt))
    {
        pt = pt - 'A';
        ci = (pt + n) % 26;
        ci = ci + 'A';
    }

    return ci;
}
