#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x = 1221; // try 343, 71517

    char Str[50];
    sprintf(Str, "%d", x); // convert x to string

    for (int i = 0; i < strlen(Str) / 2; i++)
    {
        if (Str[i] != Str[(strlen(Str) - 1) - i])
        {
            printf("%d is NOT a palindrome", x);
            return 0;
        }
    }

    printf("%d is a Palindrome number", x);
    return 0;
}