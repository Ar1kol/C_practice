#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define SIZE 256

struct node
{
    char key;
    bool value;
};

struct node hash_table[SIZE];

int have_common_items1(const char *str1, const char *str2);
int have_common_items2(const char *str1, const char *str2);
int hash(char key);
void insert(char key);
bool find(char key);

int main()
{
    char *s1 = "abc(){}[]<>!@#$%^&*~_`";
    char *s2 = "zyx%";
    int res = have_common_items2(s1, s2);

    printf("%d\n", res);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d, %d\n", hash_table[i].key, hash_table[i].value);
    }
    return 0;
}

int hash(char key)
{
    return (int)key;
}

void insert(char key)
{
    int index = hash(key);
    // printf("%d ", index);
    hash_table[index].key = key;
    hash_table[index].value = true;
}

bool find(char key)
{
    int index = hash(key);
    return hash_table[index].value;
}

int have_common_items2(const char *str1, const char *str2) // O(n^2)
{
    const char *s_iter1 = NULL;
    const char *s_iter2 = NULL;
    s_iter1 = str1;
    s_iter2 = str2;
    assert(str1 != NULL && str2 != NULL);

    while (*s_iter1 != '\0')
    {
        insert(*s_iter1);
        s_iter1++;
    }

    while (*s_iter2 != '\0')
    {
        if (find(*s_iter2))
        {
            return true;
        }
        s_iter2++;
    }

    return false;
}

int have_common_items1(const char *str1, const char *str2) // O(n^2)
{
    const char *s_iter1 = NULL;
    const char *s_iter2 = NULL;
    s_iter1 = str1;
    s_iter2 = str2;
    assert(str1 != NULL && str2 != NULL);

    while (*s_iter1 != '\0')
    {
        s_iter2 = str2;
        while (*s_iter2 != '\0')
        {
            if (*s_iter1 == *s_iter2)
            {
                return true;
            }

            s_iter2++;
        }
        s_iter1++;
    }

    return false;
}
