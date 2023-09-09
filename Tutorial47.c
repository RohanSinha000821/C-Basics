#include <stdio.h>
#include <string.h>
#include <stdlib.h> // All memory allocation function comes under
// this built in library function.

int main()
{
    // Use of malloc.
    int *ptr;
    int n;
    printf("Enter the size of the array you want\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i,*(ptr+i));
    }
    return 0;
}