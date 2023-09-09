#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber()
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % 2;
}
int main()
{
    char name[10];
    int p1=0,c=0;
    printf("Enter your name : ");
    gets(name);
    printf("Press 0 for rock\nPress 1 for paper\nPress 2 for scissors\n");
    for (int i = 0; i <=2; i++)
    {
        int choice1,compchoice;
        compchoice =  generateRandomNumber();
        printf("Enter your choice : ");
        scanf("%d",&choice1);
        if (choice1 == 0)
        {
            if (compchoice == 2)
            {
                printf("%s chose rock\n",name);
                printf("Computer chose scissors\n");
                printf("%s wins the round %d\n",name,i+1);
                p1++;
            }
            else if (compchoice == 0)
            {
                printf("%s chose rock\n",name);
                printf("Computer chose rock\n");
                printf("Both have chosen rock,so no points awarded\n");
            }
            else
            {
                printf("%s chose rock\n",name);
                printf("Computer chose paper\n");
                printf("Computer wins round %d\n",i+1);
                c++;
            }
            printf("\n\n");
        }
        
        else if (choice1 == 1)
        {
             if (compchoice == 0)
            {
                printf("%s chose paper\n",name);
                printf("Computer chose rock\n");
                printf("%s wins the round %d\n",name,i+1);
                p1++;
            }
            else if (compchoice == 1)
            {
                printf("%s chose paper\n",name);
                printf("Computer chose paper\n");
                printf("Both have chosen paper,so no points awarded\n");
            }
            else
            {
                printf("%s chose paper\n",name);
                printf("Computer chose scissors\n");
                printf("Computer wins round %d\n",i+1);
                c++;
            }
            printf("\n\n");
        }
        else if(choice1 == 2)
        {
             if (compchoice == 1)
            {
                printf("%s chose scissors\n",name);
                printf("Computer chose paper\n");
                printf("%s wins the round %d\n",name,i+1);
                p1++;
            }
            else if (compchoice == 2)
            {
                printf("%s chose scissors\n",name);
                printf("Computer chose scissors\n");
                printf("Both have chosen scissors,so no points awarded\n");
            }
            else
            {
                printf("%s chose scissors\n",name);
                printf("Computer chose rock\n");
                printf("Computer wins round %d\n",i+1);
                c++;
            } 
            printf("\n\n");   
        }
    }
    printf("%s scored %d points\n",name,p1);
    printf("Computer scored %d points\n",c);
    if (p1>c)
    {
        printf("%s wins the game.\n",name);
    }
    else if(p1 == c)
    {
        printf("It's a draw.\n");
    }
    else
    {
        printf("Computer wins the  game\n");
    }
    return 0;
}