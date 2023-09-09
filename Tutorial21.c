// C program to find factorial of a number
#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}
int main()
{
    int n;
    printf("Enter a number you want the factorial of : \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}