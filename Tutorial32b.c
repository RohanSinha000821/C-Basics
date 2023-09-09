#include <stdio.h>

int f(int *a, int n)

{ 
    if (n <= 0) return 0; 
    else if(*a % 2==0) return (*a + f(a+1,n-1)); // a+1 refers to address of 
    // next element in array.
    else return (*a - f(a+1, n-1));
} 
int main(){ 
    int arr[] = {12, 7, 13, 4, 11, 6}; 
    int b = f(arr,6);
    printf("%d", b);
    return 0;
}

/* 
   Dry Run of the program :-
   12 + f(a+1,5)
   12 + 7 - f(a+2,4)
   19 - (13 - f(a+3,3))
   6 + f(a+3,3)
   6 + 4 + f(a+4,3)
   10 + 11 - f(a+5,1)
   21 - (6 - f(a+6,0))
   15 - 0 = 15
*/   