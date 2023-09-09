#include <stdio.h>
/*
Print a multiplication table of a numver entered by the user in pretty form
Example:-
Input 
Enter the number you want multiplication table of:
6
Output
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60
*/

int main()
{
    int a;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);

    printf("Table of %d:\n", a);
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
    return 0;
}
