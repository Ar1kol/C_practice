#include <stddef.h>
#include <stdio.h>
#include <assert.h>

int StringCompare(const char *str1, const char *str2);

int main()
{

    char *s1 = "(null)";
    char *s2 = "Hello !!!???";
    int total = StringCompare(s1, s2);
    printf("%d", total);

    return 0;
}

int StringCompare(const char *str1, const char *str2)
{
    const char *s_iter1 = NULL;
    const char *s_iter2 = NULL;
    assert(str1 != NULL && str2 != NULL);

    int count = 0;
    s_iter1 = str1;
    s_iter2 = str2;
    // while (*s_iter1 != '\0' && *s_iter2 != '\0')
    // {
    //     if (*s_iter1 == *s_iter2)
    //     {
    //         ++s_iter1;
    //         ++s_iter2;
    //     }

    //     else if (*s_iter1 != *s_iter2)
    //     {
    //         if ((*s_iter1 > *s_iter2) || (*s_iter1 != '\0' && *s_iter2 == '\0'))
    //         {
    //             count += 1;
    //             return count;
    //         }
    //         else if ((*s_iter1 < *s_iter2) || (*s_iter1 == '\0' && *s_iter2 != '\0'))
    //         {
    //             count -= 1;
    //             return count;
    //         }

    //         ++s_iter1;
    //         ++s_iter2;
    //     }

    // }

    // return count;

    // while (*s_iter1 == *s_iter2)
    // {
    //     if (*s_iter1 == '\0' && *s_iter2 == '\0')
    //         break;
    //     ++s_iter1;
    //     ++s_iter2;
    // }
    // return *s_iter1 - *s_iter2;

    while (*s_iter1 != '\0' || *s_iter2 != '\0')
    {
        if (*s_iter1 == *s_iter2)
        {
            s_iter1++;
            s_iter2++;
        }
        // If two characters are not same
        else if ((*s_iter1 == '\0' && *s_iter2 != '\0') || (*s_iter1 != '\0' && *s_iter2 == '\0') || *s_iter1 != *s_iter2)
        {
            break;
        }
    }
    return *s_iter1 - *s_iter2;
}