// Program to print fibonacci series.
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1;
    printf("Enter the number of terms you want the fibonacci series to contain : ");
    scanf("%d", &n);
    printf("The fibonacci series upto %d number of terms is : ", n);
    for (int i = 0; i < n ; i++)
    {
        printf(" %d , ", a);
        b = a + b;
        a = b - a;
    }
    return 0;
}
