#include <stdio.h>

int main()
{
    int sum = 0;
    int iterations = 0;

    int target = 10;

    for (int i = 0; i < target; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (sum >= target)
            {
                // Use of goto keyword with label "Done"
                goto Done;
            }
            else
            {
                sum += i;
                iterations++;
            }
        }
    }
    // our loop will break & code will jump here
Done:
    printf("Jumped to Done using goto keyword \n");
    printf("Iterations : %d", iterations);

    return 0;
}
