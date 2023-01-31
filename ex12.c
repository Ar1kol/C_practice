#include <stddef.h>
#include <stdio.h>

void MoveElements(int array[], size_t size, size_t count);
size_t i;

int main()
{
    int nums[8] = {3, 7, 2, 8, 5, 9, 1, 4};
    MoveElements(nums, 8, 3);

    return 0;
}

void MoveElements(int array[], size_t size, size_t count)
{
    int temp;

    while (count)
    {
        count--;
        temp = array[0];
        for (i = 0; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        array[size - 1] = temp;
    }
}


