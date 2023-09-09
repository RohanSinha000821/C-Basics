// WAP to check a number is palindrome or not.
#include <stdio.h>
int isPalindrome(int n)
{
    int temp, s=0, r;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        s = (s * 10) + r;
        n = n / 10;
    }
    if (s == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int num;
    printf("Enter a number which is to be checked for palindrome : ");
    scanf("%d", &num);
    if (isPalindrome(num) == 1)
    {
        printf("Entered number is palindrome.\n");
    }
    else if(isPalindrome(num) == 0)
    {
        printf("Entered number is not a palindrome\n");
    }

    return 0;
}