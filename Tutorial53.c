#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The value at address of ptr is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is null pointer and cannot be dereferenced.\n");
    }

    return 0;
}