#include <math.h>
#include <stdio.h>

struct Point
{
    int x, y;
};

float Distance(struct Point a, struct Point b);

int main()
{
    struct Point p1, p2;
    p1.x = 3;
    p1.y = 4;
    p2.x = 9;
    p2.y = 10;
    float d = Distance(p1, p2);
    printf("%.2f", d);

    return 0;
}

float Distance(struct Point a, struct Point b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}