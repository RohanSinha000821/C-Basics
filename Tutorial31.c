// Call by  value example 
# include <stdio.h>
int add(int a ,int b)  // Here, a and b are formal parameters. 
{
    int y1=12;
    a=a+7;
    printf("The copied value of x to a inside function is %d\n",a);
    return a+b;
}
int z=8;
int main()
{
    int x=2,y=5;
    x=z; // Since z is a global variable. 
    // y=y1;  // Does not work as y1 is local variable.
    printf("%d\n",add(x,y)); // here, x and y are actual parameters.
    printf("The value of x after changing value of a in function is %d\n",x);
    printf("This shows that the value of 'a' does not effect the value of 'x' as 'a'is a local variable ");
    return 0;
}