#include <stdio.h>

int IsPrimeNumber(unsigned long num);

int main()
{
    int type = IsPrimeNumber(47);
    printf("%d", type);
    return 0;
}

int IsPrimeNumber(unsigned long num)
{

    if (num == 2 || num == 3)
        return 1;

    if (num == 1 || num % 2 == 0 || num % 3 == 0)
        return 0;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }

    return 1;
}