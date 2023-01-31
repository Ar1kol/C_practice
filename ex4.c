#include <stdio.h>

int TriangleType(int angle1, int angle2);

int main()
{
    int type = TriangleType(90, 45);
    printf("%d", type);
    return 0;
}

int TriangleType(int angle1, int angle2)
{
    if (angle1 <= 0 || angle2 <= 0 || angle1 >= 180 || angle2 >= 180 || angle1 + angle2 > 180)
    {
        return -1;
    }

    else
    {
        int angle3 = 180 - angle1 - angle2;

        if ((angle1 + angle2 == 90) || (angle1 + angle3 == 90) || (angle2 + angle3 == 90) ||
            (angle1 == 90) || (angle2 == 90) || (angle3 == 90))
        {
            if ((angle1 == angle2) || (angle1 == angle3) || (angle2 == angle3))
            {
                return 3;
            }
            else
            {
                return 1;
            }
        }
        else if ((angle1 == angle2) || (angle1 == angle3) || (angle2 == angle3))
        {
            if ((angle1 + angle2 == 90) || (angle1 + angle3 == 90) || (angle2 + angle3 == 90) ||
                (angle1 == 90) || (angle2 == 90) || (angle3 == 90))
            {
                return 3;
            }
            else
            {
                return 2;
            }
        }
        else
            return 0;
    }
}