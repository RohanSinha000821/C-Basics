# include <stdio.h>
void Triangular_star_patern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
void Reversed_Triangular_star_patern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int a,b;
    printf("Press 0 to print Triangular_star_patern\n");
    printf("Press 1 to print Reversed_Triangular_star_patern\n");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
        printf("Enter the no of lines you want for Triangular_star_patern : ");
        scanf("%d",&b);
        Triangular_star_patern(b);
        break;
    
    case 1:
        printf("Enter the no of lines you want for Reversed_Triangular_star_patern : ");
        scanf("%d",&b);
        Reversed_Triangular_star_patern(b);
        break;
        
    default:
        break;
    }
    return 0;
}