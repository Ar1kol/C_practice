#include <stdio.h>
#include <stdbool.h>
#include <strings.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    char *name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count = 0;
int candidate_count = 0;

// Function prototypes
bool vote(int voter, int rank, char *name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);
char *get_input_string();

int main(int argc, char *argv[])
{
    // // Check for invalid usage
    // if (argc < 2)
    // {
    //     printf("Usage: runoff [candidate ...]\n");
    //     return 1;
    // }

    // // Populate array of candidates

    candidate_count = 3; // argc - 1

    // if (candidate_count > MAX_CANDIDATES)
    // {
    //     printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
    //     return 2;
    // }
    // for (int i = 0; i < candidate_count; i++)
    // {
    //     candidates[i].name = argv[i + 1];
    //     candidates[i].votes = 0;
    //     candidates[i].eliminated = false;
    // }

    candidates[0].name = "a";
    candidates[0].votes = 0;
    candidates[0].eliminated = false;
    candidates[1].name = "b";
    candidates[1].votes = 0;
    candidates[1].eliminated = false;
    candidates[2].name = "c";
    candidates[2].votes = 0;
    candidates[2].eliminated = false;

    printf("Number of voters: ");
    scanf("%i", &voter_count);
    getchar();

    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {
        // Query for each rank
        for (int j = 0; j < candidate_count; j++) // candidate_count
        {
            printf("Rank %i: ", j + 1);
            char *name = get_input_string();

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            // bool vote(int voter, int rank, char *name)
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        // printf("won is: %i\n", won);
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }

    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, char *name)
{
    for (int i = 0; i < candidate_count; i++) // candidate_count
    {
        if (!strcasecmp(name, candidates[i].name))
        {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            if (!candidates[preferences[i][j]].eliminated)
            {
                candidates[preferences[i][j]].votes += 1;
                break;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    int half = voter_count / 2;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > half)
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }

    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    int min = voter_count / 2;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes < min && !candidates[i].eliminated)
        {
            min = candidates[i].votes;
        }
    }
    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    int counter_equals = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (!candidates[i].eliminated)
        {
            if (candidates[i].votes != min)
            {
                return false;
            }
        }
    }

    return true;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min && !candidates[i].eliminated)
        {
            candidates[i].eliminated = true;
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
