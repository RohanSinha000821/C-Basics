// WAP to check a string is palindrome or not.
#include <stdio.h>
#include <string.h>
int isPalindrome(char *s)
{
    int len;
    char temp[20];
    strcpy(temp,s);
    len = strlen(s) - 1;
    printf("%d\n",len);
    for (int i = 0; i < (len+1)/2; i++)
    {
        char t;
        t = s[i];
        s[i]=s[len-i];
        s[len-i]=t;
    }
    printf("The reversed string is %s.\n",s);
    if (strcmp(s,temp) == 0)
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
    printf("Enter the string which is to be checked for palindrome\n");
    gets(str);
    printf("Entered string is %s.\n\n", str);
    if (isPalindrome(str) == 1)
    {
        printf("Entered string is palindrome\n");
    }
    else
    {
        printf("Entered string is not palindrome\n");
    }

    return 0;
}