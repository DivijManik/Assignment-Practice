#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 5, 6, 6};
    int arrSize = (int)(sizeof(arr) / sizeof(arr[0]));
    // printf("%d \n", arrSize);

    int ans[10]; // this will be our final array
    int ansSize = 0;
    for (int i = 0; i < arrSize; i++)
    {
        /* code */
        if (arr[i] != arr[i + 1])
        {
            ans[ansSize] = arr[i];
            ansSize += 1;
        }
    }

    for (int i = 0; i < ansSize; i++)
    {
        printf("%d \n", ans[i]);
    }
    return 0;
}