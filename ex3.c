#include <stdio.h>

unsigned ReverseNumber(unsigned number);

int main()
{
    ReverseNumber(146);
    return 0;
}

unsigned ReverseNumber(unsigned number)
{
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    ones_digit = number % 10;
    tens_digit = number % 100 / 10;
    hundreds_digit = number / 100;

    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;
    printf("%u", result);
    return result;
}