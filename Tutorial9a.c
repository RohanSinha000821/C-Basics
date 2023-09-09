#include <stdio.h>
#define PI 3.14
/* This is a multiline comment 

This is not read by the compiler 
*/
int main()
{
    const float b = 7.333;
    // b=2.444; //cannot do this since b is constant

    printf("%.2f \n", PI);
    //PI=7.33; // PI value is defined above by the statement #define PI 3.14

    printf("Tab character \t My backslash \\ , To print slash n = \\n , To provide sound \a ");
    return 0;
}
