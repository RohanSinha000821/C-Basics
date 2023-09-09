#include <stdio.h>
//Typecasting syntax
// (type) value
int main()
{
    int a = 3;
    float b = (float)54 / 5;
    float c = 54 / 5;
    float d=58.5/5.2;
    float e=58.5/5;
    printf("The value of a is %d\n", a);
    printf("The value of b is %0.2f\n", b);
    printf("The value of b after typecasting is %d\n", (int)b);
    printf("See the value of c and b\n");
    printf("The value of c is %f\n", c); // Which is not same as value of two integers is given integer by C as done for 54/5
    printf("The value of d is %f\n",d);
    printf("The value of e is possible even if we use integer and float together which is %f",e);
    return 0;
}
