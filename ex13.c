// #include <math.h>

// void PolarToCartesian(float length, float angle, float* x, float* y)
// {
// 	/* First convert the angle parameter from degrees to radians */
// 	angle = angle * M_PI / 180.0;

// 	*x = length * cos(angle);
// 	*y = length * sin(angle);
// }

// void main()
// {
// 	float x, y;

// 	PolarToCartesian(150, 34, &x, &y);

// 	printf("The cartesian coordinates for (150,34o) are: (%.2f, %.2f)", x, y);
// }
#include <stdio.h>

int Divide(int numerator, int denominator, int *quotient, int *remainder);

int main()
{
    int quotient, remainder;
    Divide(5, 2, &quotient, &remainder);

    return 0;
}

int Divide(int numerator, int denominator, int *quotient, int *remainder)
{
    if (denominator)
    {
        *quotient = (int)(numerator / denominator);
        *remainder = (int)(numerator % denominator);
        
        return 0;
    }
    
    return -1;
}