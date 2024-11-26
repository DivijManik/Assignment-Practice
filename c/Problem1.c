#include <stdio.h>
#include <stdbool.h>

// Two Sums function
int *TwoSums(int nums[], int target);

// Main
int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9; // Try target as : 90, 13

    int *ans = TwoSums(nums, target);

    for (int i = 0; i < 2; i++)
    {
        if (ans[i] == -1)
        {
            printf("No Sum found that matches the target.");
            break;
        }
        else
        {
            printf("Index : ");
            printf("%d", ans[i]);
            printf("\n");
        }
    }
    return 0;
}

// Two Sums ------->
int *TwoSums(int nums[], int target)
{
    static int array[2];
    bool foundSum = false;

    // Calculating Length of the data Array
    int numsSize = (int)sizeof(nums);

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i != j && (nums[i] + nums[j]) == target)
            {
                array[0] = i;
                array[1] = j;
                foundSum = true;
                // goto Done;
            }
        }
        if (foundSum)
            break;
    }

    if (foundSum)
    {
        return array;
    }
    else
    {
        // we will return : -1
        // if we did not find a sum that matches the target
        array[0] = -1;
        return array;
    }
    // Done:
    //     return array;
}