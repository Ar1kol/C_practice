#include <stdio.h>

float SquareRoot(float num);
float sqrt, temp;
int main()
{
    float sqr_num = SquareRoot(4085.48);
    printf("sqrt = %f", sqr_num);

    return 0;
}

float SquareRoot(float num)
{
    temp = 0;
    sqrt = num / 2;
    while (sqrt != temp)
    {   
        temp = sqrt;
        sqrt = (sqrt + num / sqrt) / 2;
        printf("%f\n", sqrt);
    }

    return sqrt;
}