# include <stdio.h>
int func1(int b){
    printf("The address of b inside func1 is %x\n",&b);
    return b*10;
}
int main()
{
    int b = 344;
    printf("The address of b inside main function is %x\n",&b);
    printf("The value of func1 is %d\n",func1(b));
    return 0;
}