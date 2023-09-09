#include <stdio.h>

int main()
{   
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You are eligible to vote!\n");
    }
    else if (age>10)
    {
        printf("You are between 10 and 18 and you can vote for kids");
    }
    else if (age>3)
    {
        printf("You are between 3 and 10 and you can vote for babies");
    }
    
    else
    {
        printf("You cannot vote!");
    }
    
    return 0;
}
