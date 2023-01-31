typedef unsigned long ulong_t;

int IsPrimeNumber(ulong_t num);

int main()
{
    int type = IsPrimeNumber(47);
    printf("%d", type);
    return 0;
}

int IsPrimeNumber(ulong_t num)
{
    ulong_t i;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
