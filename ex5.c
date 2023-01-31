#include <stdio.h>

int Maximum(int num1, int num2);

int main()
{
    int type = Maximum(90, 45);
    printf("%d", type);
    return 0;
}

int Maximum(int num1, int num2)
{
    return (num1 > num2 ? num1 : num2);
}