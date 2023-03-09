#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int only_digits(const char *input);
char *get_input_string();
void encrypt(char c, int n);

int main(int argc, char const *argv[])
{
    unsigned long k;
    if (argc != 2)
    {
        printf("Error, a command-line argument hasn't been given or more than 1 argument has been provided");
        return 1;
    }

    if (only_digits(argv[1]))
    {
        k = atoi(argv[1]);
        printf("%lu\n", k);
    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    char *input_str = get_input_string();

    for (int i = 0; input_str[i] != '\0'; i++)
    {
        encrypt(input_str[i], k);
    }
    printf("\n");

    free(input_str); // free allocated memory

    return 0;
}

int only_digits(const char *input)
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isdigit(input[i]) == 0)
            return 0;
    }
    return 1;
}

char *get_input_string()
{
    int capacity = 10;                           // initial capacity
    int len = 0;                                 // length of string
    char *str = malloc(capacity * sizeof(char)); // allocate memory

    if (str == NULL)
    { // check for allocation failure
        printf("Error: memory allocation failed.\n");
        exit(1);
    }
    printf("plaintext: ");
    while (fgets(str + len, capacity - len, stdin))
    {
        len = strlen(str);
        if (str[len - 1] == '\n')
        {                        // check for end of line
            str[len - 1] = '\0'; // remove newline character
            return str;
        }

        capacity *= 2;                               // double capacity
        str = realloc(str, capacity * sizeof(char)); // reallocate memory
        if (str == NULL)
        { // check for allocation failure
            printf("Error: memory allocation failed.\n");
            exit(1);
        }
    }

    return str;
}

void encrypt(char c, int n)
{
    // printf("c: %i ", (int)c > 65);
    if ((c >= 65 && c <= 90))
    {
        printf("%c", ((c - 65 + n) % 26) + 65);
    }
    else if ((c >= 97 && c <= 122))
    {
        printf("%c", ((c - 97 + n) % 26) + 97);
    }

    else
    {
        printf("%c", c);
    }
}