#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a = 34, b = 364, sum;
    sum = a + b;
    return &sum;
}

int main()
{
    // Case 1: Deallocation of the memory block.
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now dangling pointer.

    // Case 2: Function returning local variable address.
    int *dangPtr = functionDangling(); // dangPtr is now dangling pointer.
    // printf("The value of dangPtr is %d",*dangPtr);
    // printf("The address in dangPtr is %x\n",dangPtr);
    // The above two lines will show error : function returns address of local variable.

    // Case 3: If a variable goes out of scope.
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
    } 
    // Here the variable goes out of scope which means danglingPtr3 is
    // pointing to a location which is freed and hence danglingPtr3
    // is now a dangling pointer. 
    return 0;
}