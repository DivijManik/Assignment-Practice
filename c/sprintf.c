#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num = 1234;

    char str[50];

    // converting integer to string
    sprintf(str, "%d", num);

    printf("to string %s \n", str);

    int num2 = 0;

    // converting string to number
    num2 = atoi(str);

    printf("to int %d", num2);
    return 0;
}