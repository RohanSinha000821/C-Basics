#include <stdio.h>
int a=8;
float b=9.3333;
int main1()
{
    int a=8;
    float b=9.3333;
    printf("The value of a is %d and the value of b is %-18.6f this" , a,b);
    return 0;
}
// This program will show error as it does not have a main function
// This program is only made for the purpose of Tutorial59.c to 
// show how we can include c files from our own directory and 
// hence use the variable used in this file in Tutorial59 file.  