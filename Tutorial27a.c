// Arrays and pointers.
#include <stdio.h>
int main()
{
    int arr[] = {11 , 42, 3, 4, 5, 6, 67};
    // arr--; will not work as it is constant value. 
    printf("The value at position 3 of the array is %d\n", arr[3]);
    
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of array using pointer is %d\n", arr);

    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array using pointer is %d\n",arr + 1);
    printf("\n\n"); 

    printf("The value at address of 1st element of the array is %d\n", *(&arr[0]));
    printf("The value at address of 1st element of array using pointer is %d\n", *(arr));
    printf("The value at address of 1st element of array using pointer is %d\n",arr[0]);

    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array using pointer is %d\n",*(arr + 1));
    return 0;
}