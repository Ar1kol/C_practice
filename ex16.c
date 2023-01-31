#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int StringToInteger(const char *str);
int num, sign;

int main()
{
    char *s = "-8";
    StringToInteger(s);

    return 0;
}

int StringToInteger(const char *str)
{
    const char *s_iter = NULL;
    assert(str != NULL);
    s_iter = str;
    num = 0;

    if (*s_iter == '-')
    {
        sign = -1;
        ++s_iter;
    }
    else
    {
        sign = 1;
    }

    while (*s_iter != '\0')
    {
        if ((int)(*s_iter) > 47 && (int)(*s_iter) < 58)
        {
            num = num * 10 + ((int)(*s_iter) - 48);
        }
        else
        {

            break;
        }
        ++s_iter;
    }
    printf("%d", num * sign);

    return num * sign;
}