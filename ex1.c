#include<stdio.h>

unsigned BoxSurfaceArea(unsigned length, unsigned width, unsigned height);

int main()
{
    unsigned area = BoxSurfaceArea(8, 5, 12);
    printf("%u", area);
    return 0;
}

unsigned BoxSurfaceArea(unsigned length, unsigned width, unsigned height)
{
    /* This is an 'unsigned int' type local variable, initialized to 0 */
    unsigned area = 0;

    area = 2 * (length * width + length * height + width * height);

    return area;
}
