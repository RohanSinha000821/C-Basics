// WAP to check a string is palindrome or not.
#include <stdio.h>
#include <string.h>
int isPalindrome(char *s)
{
    int l, f = 0;
    l = strlen(s);
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            f++;
            break;
        }
    }
    if (f == 0)
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
    char str[20];
    printf("Enter the string which is to be checked for palindrome : ");
    gets(str);
    printf("Entered string is %s.\n\n", str);
    if (isPalindrome(str) == 1)
    {
        printf("Entered string is palindrome.\n");
    }
    else
    {
        printf("Entered string is not palindrome.\n");
    }

    return 0;
}