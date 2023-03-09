#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <strings.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    char *name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(char *name);
void print_winner(void);
char *get_input_string();

int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    // candidates[0].name = "Bob";
    // candidates[0].votes = 0;
    // candidates[1].name = "Alice";
    // candidates[1].votes = 0;
    // candidates[2].name = "Harry";
    // candidates[2].votes = 0;

    int voter_count;
    printf("Number of voters: ");
    scanf("%d", &voter_count);
    getchar();

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char *name = get_input_string();

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    // Display winner of election
    print_winner();

    return 0;
}

// Update vote totals given a new vote
bool vote(char *name)
{
    for (int i = 0; i < MAX; i++)
    {
        if (!strcasecmp(name, candidates[i].name))
        {
            candidates[i].votes++;
            return true;
        }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int max = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (candidates[i].votes > max)
        {
            max = candidates[i].votes;
        }
    }
    if (max)
    {
        for (int i = 0; i < MAX; i++)
        {
            if (candidates[i].votes == max)
            {
                printf("%s\n", candidates[i].name);
            }
        }
    }
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
    printf("Vote: ");
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