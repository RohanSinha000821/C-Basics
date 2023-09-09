// Pointers in a very extensive manner.
// Carefully observe the print statements.
#include <stdio.h>
int main()
{
    int a = 6, *b, **ptr;
    b = &a;
    ptr = &b;
    printf("%x\n", **ptr);
    printf("%x\n", *b);
    printf("%x\n\n", a);

    printf("%x\n", *ptr);
    printf("%x\n", b);
    printf("%x\n\n", &a);

    printf("%x\n", ptr);
    printf("%x\n\n", &b);

    printf("%x\n", &ptr);
    return 0;
}