// Wap initial value of a and b is something then it is a = a+b & b = a-b .
# include <stdio.h>
void changevalue(int *x,int *y){
    int temp=*x;
    *x = *x + *y;
    *y = temp - *y;
    printf("The value of 'a' and 'b' after change value function is %d and %d",*x,*y);
}
int main()
{
    int a=12,b=5;
    printf("The original value of 'a' and 'b' is %d and %d\n",a,b);
    changevalue(&a,&b);
    return 0;
}