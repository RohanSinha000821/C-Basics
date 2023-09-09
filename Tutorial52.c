#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    char c = 'r';
    double d = 88.345;
    void *ptr;
    void *ptr1;
    void *ptr2;
    ptr = &a;
    ptr1 = &b;
    // printf("The value of a is %d\n",*ptr);  This will show error as ptr is void
    // pointer and cannot be derefernced directly. We need to typecast that pointer.
    printf("The value of a is %d\n", *(int *)ptr);
    printf("The value of b is %0.1f\n", *(float *)ptr1);

    ptr2 = &c;
    printf("The value of c is %c\n",*(char *)ptr2);
    ptr2 = &d;
    printf("The value of d is %0.2lf\n",*(double *)ptr2); 
    return 0;
}