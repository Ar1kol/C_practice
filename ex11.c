#include <stddef.h>
#include <stdio.h>

int CalculateAverage(const int array[], size_t size);
size_t i;
long sum;
float f_sum;

int main()
{
    int nums[5] = {13, 45, 32, 56, 27};

    int avg = CalculateAverage(nums, 5);
    printf("sqrt = %d", avg);

    return 0;
}

int CalculateAverage(const int array[], size_t size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {   
        sum = 0;
        for (i = 0; i < size; i++)
        {
            sum += array[i];
        }
        f_sum = (float)sum / size;
        f_sum += 0.5;

        return ((int)f_sum);
    }
}