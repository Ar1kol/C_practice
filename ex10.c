#include <stddef.h>

size_t IndexOf(const int array[], size_t size, int element);
size_t i;

int main()
{   
    int nums[5] = {12, 45, 32, 56, 27};
    IndexOf(nums, 5, 56);

    return 0;
}

size_t IndexOf(const int array[], size_t size, int element)
{
    for (i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}