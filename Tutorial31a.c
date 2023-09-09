// Call by Reference example 
# include <stdio.h>
int swap(int *x, int *y){
    int temp;
    temp=*x; // Temp has the value at address of x
    *x=*y;  // The value at address of y is saved as the value at address of x.
    *y=temp; // The vaue of temp is saved at the value at address of y.
}
int main()
{
    int a=32,b=25;
    printf("The two no before swaping are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The two no after swaping are %d and %d\n",a,b);
    return 0;
}