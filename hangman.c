#include<stdio.h>

#define CANDIDATE_COUNT 4

typedef struct
{
    char *name;
    int votes;
} Candidate;

Candidate candidates[CANDIDATE_COUNT] =
{
    {"Narendra Modi", 0},
    {"Rahul Pappu Gandhi", 0},
    {"Arvind Keju", 0},
    {"Uddhav Thakrey", 0}
};

int spoiledtvotes = 0;

void castVote()
{
    int choice;
    int validChoice = 0;

    printf("\n\n ### Please choose your Candidate ###\n\n");
    for(int i=0; i<CANDIDATE_COUNT; i++)
    {
        printf("\n %d. %s", i+1, candidates[i].name);
    }
    printf("\n %d. %s", CANDIDATE_COUNT+1, "None of These");

    do
    {
        printf("\n\n Input your choice (1 - %d) : ", CANDIDATE_COUNT+1);
        scanf("%d",&choice);

        if(choice>=1 && choice<=CANDIDATE_COUNT+1)
        {
            validChoice = 1;

            if(choice == CANDIDATE_COUNT+1)
            {
                spoiledtvotes++;
            }
            else
            {
                candidates[choice-1].votes++;
            }

            printf("\n Thank You for voting!! ");
        }
        else
        {
            printf("\n Error! Wrong choice selected,please retry!!");
        }
    }
    while(!validChoice);
}

void votesCount()
{
    printf("\n\n #### Voting Statics ####");
    for(int i=0; i<CANDIDATE_COUNT; i++)
    {
        printf("\n %s - %d ", candidates[i].name, candidates[i].votes);
    }
    printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate()
{
    int leadingVotes = 0;
    printf("\n\n #### Leading Candidate #### \n\n");
    for(int i=0; i<CANDIDATE_COUNT; i++)
    {
        if(candidates[i].votes > leadingVotes)
        {
            leadingVotes = candidates[i].votes;
            printf("[%s]",candidates[i].name);
        }
    }
}

int main()
{
    int i;
    int choice;

    do
    {
        printf("\n\n ##### Welcome to Election/Voting 2024 #####");
        printf("\n\n 1. Cast the Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find leading Candidate");
        printf("\n 0. Exit");

        printf("\n\n Please enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            castVote();
            break;
        case 2:
            votesCount();
            break;
        case 3:
            getLeadingCandidate();
            break;
        default:
            printf("\n Error: Invalid Choice");
        }
    }
    while(choice!=0);

    getchar();

    return 0;
}
