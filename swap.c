#include<stdio.h>

void Swap(int *a, int *b);

int main()
{
    int x = 1, y = 2;
    printf("x = %i, y = %i\n", x, y);
    Swap(&x, &y);
    printf("x = %i, y = %i\n", x, y);
    return 0;
}

void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    // printf("pointer x = %p, pointer y = %p\n", a, b);

}