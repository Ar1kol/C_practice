#include <stdio.h>

unsigned Fibonacci(unsigned num);
unsigned long long n1, n2, next, i;

int main()
{
    unsigned long long fib_num1 = Fibonacci(3);
    printf("%llu", fib_num1);

    return 0;
}

unsigned Fibonacci(unsigned num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        n1 = 0, n2 = 1, next;
        for (i = 2; i <= num; i++)

        {
            next = n1 + n2;
            n1 = n2;
            n2 = next;
        }

        return n2;
    }
}