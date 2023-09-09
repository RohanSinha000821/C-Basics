#include <stdio.h>

int main()
{

    //Two dimensional array
    int Matrix[3][3];
    printf("This Program will print no. from 1-9 in matrice form : \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the number at position [%d,%d] ", i + 1, j + 1);
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}