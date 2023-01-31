#include <stddef.h>

#include <assert.h>

size_t StringLength(const char *str);

int main()
{   
    char *str1 = "";
    StringLength(str1);
    size_t len = StringLength(str1);
    printf("%zu", len);
    
    return 0;
}

size_t StringLength(const char *str)
{   
    size_t i;
    assert(str != NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        
    }
    
    return i;
}