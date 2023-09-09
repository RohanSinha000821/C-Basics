#include <stdio.h>
int main()
{
    printf("Let's learn about pointers\n");
    int a=76;
    int* ptra = &a;
    int* ptr2 = NULL;
    printf("The value of a is %d\n",a );
    printf("The address stored in pointer %x\n", ptra);
    printf("The address stored in pointer %x\n", &a);  
    // %x is used to get address in hexadecimal format.
    // The address of a is same as that of pointer as shown above.
    // %p  is also used to store address.
    printf("The address stored in pointer %p\n", &a);
    printf("The value of pointer %d\n", *ptra); // Dereferencing the pointer
    printf("The address of pointer is %x\n",&ptra);
    printf("The address of ptr2 is %x\n",&ptr2);
    printf("The address of value stored in ptr2 is %p", ptr2);
    return 0;
}