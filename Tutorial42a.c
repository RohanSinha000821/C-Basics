# include <stdio.h>
int func1(int b){
    static int myvar,n=1;
    printf("The value of myvar in %d call is %d\n",n,myvar);
    myvar++;n++;
    return b+2;
}
int main()
{
    int b = 20;
    int val;
    val = func1(b);
    printf("The value returned by func1 is %d\n",val);

    val = func1(b);
    val = func1(b);
    val = func1(b);
    
    return 0;
}