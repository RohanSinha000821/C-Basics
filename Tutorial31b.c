// Another example of call by reference
# include <stdio.h>
void changevalue(int *x){
    *x=220;
}
int main()
{
    int a=21;
    printf("The value of 'a' is %d\n",a);
    changevalue(&a);
    printf("The value of 'a' after changevalue fuction used is %d\n",a);
    return 0;
}