# include <stdio.h>
# include <string.h>
int main()
{
    // int* a ,b; // Here this is as [int *a,b;] ,i.e, a is only pointer and b
    // is not . So if we want to make two pointers together then,
    typedef int* intPointer;
    intPointer a,b; // Here bothe a,b is a pointer.
    int c=4;
    a=&c;
    b=&c;
    printf("Value of a is %x and value of b is %x\n",a,b);
    return 0;
}