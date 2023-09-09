#include <stdio.h>

int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 50:
            printf("Your marks is 50");
            break;
        
        default:
            printf("Your marks is not 50");
            break;
        }
        break;
    case 13:
        printf("The age is 13");
        break;    
    case 23:
        printf("The age is 23");
        break;
    default:
        printf("The age is not 3,13,23");
        break;
    }
    return 0;
}
