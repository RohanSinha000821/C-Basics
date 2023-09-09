// Basic way to define array.
#include <stdio.h>
int main()
{
    int marks[4];
    /* 
    marks[0] = 4;
    marks[1] = 21;
    marks[2] = 22;
    marks[3] = 15;
    // Above mentioned code is one way to use 1D array
    */

    /*
   for (int i = 0; i < 4; i++)
   {
       printf("Enter the element of array on position [%d] : ",i);
       scanf("%d",&marks[i]);
   }
   for ( int i = 0; i < 4; i++)
    {
        printf("Marks of student %d is %d \n",i,marks[i]);
    }
   */
    int age[4] = {2, 8, 9, 6};
    for (int i = 0; i < 4; i++)
    {
        printf("The age of %d person is : ", i + 1);
        printf("%d\n", age[i]);
    }
    printf("\n\n");
    // Now making a 2D array
    // Below example is a matrix of order 2 X 3
    printf("This is a 2 X 3 matrix : \n");
    int array[2][3] = {{2, 4, 6}, {6, 10, 12}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
