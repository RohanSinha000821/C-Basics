#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char c1,char c2){
    // For rock,paper,scissors - Return 1 if c1>c2 and otherwise 0.
    // If c1 == c2 then it will return -1 .
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c1 == 's') && (c2 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c1 == 'r') && (c2 == 'p'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c1 == 'p') && (c2 == 's'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0,compscore = 0 ,temp;
    char playerchar,compchar;
    char dict[] = {'r','p','s'};
    printf("Welcome to Rock , Paper , Scissors Game.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input.
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock , 2 for Paper , 3 for Scissors.\n");
        scanf("%d",&temp);
        playerchar = dict[temp-1];
        printf("You chose %c\n",playerchar);

        // Generate computer's input.
        printf("Computer's Turn:\n");
        temp = generateRandomNumber(2) + 1;
        compchar = dict[temp-1];
        printf("Computer chose %c\n",compchar);

        // Compare the scores.
        if (greater(compchar,playerchar) == 1)
        {
            compscore++;
            printf("Computer Got it!\n");
        }
        else if (greater(compchar,playerchar) == -1)
        {
            compscore++;
            playerscore++;
            printf("It's a Draw!\n");
        }
        else
        {
            playerscore++;
            printf("You got it!\n");
        }
        printf("You : %d\nComputer : %d\n\n",playerscore,compscore);
    }
    if (playerscore > compscore)
    {
        printf("You won the game.\n");
    }
    else if (playerscore < compscore)
    {
        printf("Computer wins the game.\n");
    }
    else
    {
        printf("It's a draw.\n");
    }
    return 0;
}
