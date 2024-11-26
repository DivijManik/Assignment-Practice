#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int ReversedInt(int x)
{
    char str[] = "";
    bool isNegative = false;
    if (x < 0)
    {
        x *= -1;
        isNegative = true;
    }
    int xCopy = x;

    while (xCopy > 0)
    {
        int len = strlen(str);         // get length
        str[len] = (xCopy % 10) + '0'; // returns last int & converts to chat using + '0'
        str[len + 1] = '\0';
        xCopy /= 10;
    }

    int ans = atoi(str);

    if (isNegative)
    {
        ans *= -1;
    }
    return ans;
}

int main()
{
    int x = -123;

    int ans = ReversedInt(x);

    printf("%d", ans);
    return 0;
}