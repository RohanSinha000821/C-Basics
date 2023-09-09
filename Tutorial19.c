#include <stdio.h>
int sum(int a, int b); //This is called declaration of a function. With arguments and return value (It is defined below)

void printstar(int n)  // With Argument and no return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
} 

int takenumber()   // Without argument and with return value
{
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    return i;
}

void print()
{
    printf("This is to show an example of function without argument and no return value");
}
int main()
{   
    int a,b,c;
    a=9;
    b=87;
    // c=sum(a,b);
    // printf("The sum is %d\n",c);

    // printstar(7);
    
     c=takenumber();
     printf("The number entered is %d\n",c);

    // print();
    return 0;
}
int sum(int a, int b)  // Here the above declared function is defined.
{
    return a+b;
}

