#include <stddef.h>
#include <stdio.h>
#include <assert.h>

size_t StringLength(const char *str);

int main()
{
    char *str1 = "";
    size_t len = StringLength(str1);
    printf("%zu", len);

    return 0;
}

size_t StringLength(const char *str)
{
    const char* s_iter = NULL;
    assert(str != NULL);

    for (s_iter = str; s_iter != '\0'; ++s_iter)
    {
    }

    return s_iter - str;
}