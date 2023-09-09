// Good example how pointers used in function can change value 
// in main function also .
# include <stdio.h>
int f(int x , int *py , int **ppz){
    int y,z;
    **ppz += 1; z = **ppz;
    printf("*py = %d\n",*py);
    *py += 2; y = *py ;
    x += 5;
    printf("x = %d , y = %d , z = %d\n",x,y,z);
    return x+y+z; 
}
void main()
{
    int c , *b , **a;
    c = 4; b = &c; a = &b;
    printf("%d",f(c,b,a));
    printf("\nValue of c now is %d",c); // Value of the integer changed in the function.
}