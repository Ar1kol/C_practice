#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *get_input_string();
int counter(const char *input);

int main(void)
{
    // char *input_str = get_input_string();

    char *input_str = "A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.";

    int res = counter(input_str);
    if (res < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (res > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", res);
    }

    return 0;
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

int counter(const char *input)
{

    int letters_count = 0, words_count = 1, sentences_count = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122))
        {
            letters_count++;
        }
        else if (input[i] == 32)
        {
            words_count++;
        }
        else if (input[i] == 33 || input[i] == 46 || input[i] == 63)
        {
            sentences_count++;
        }
    }

    float index = 0.0588 * (letters_count / (float)(words_count)*100.0) - 0.296 * (sentences_count / (float)(words_count)*100.0) - 15.8;

    return (int)index;
}