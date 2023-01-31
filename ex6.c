#include <stdio.h>
#include <float.h>
#include <math.h>

int IsRightTriangle(float a, float b, float c);
float calcDifference();
static void isHypotenuse();
float difference;
float a=12.00, b=14.00, c=18.44;

int main()
{
    int type = IsRightTriangle(a, b, c);
    printf("%d", type);
    return 0;
}

int IsRightTriangle(float a, float b, float c)
{
    isHypotenuse();
    difference = calcDifference();
    printf("%f\n", difference);

    if (difference < FLT_EPSILON)
    {
        return 1;
    }
    return 0;
}

static void isHypotenuse()
{
    float temp;
    if (a > b && a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > a && b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%f %f %f\n", a, b, c);
}

float calcDifference()
{
    float dif = (c * c) - ((a * a) + (b * b));
    return dif < 0 ? dif * -1 : dif;
}