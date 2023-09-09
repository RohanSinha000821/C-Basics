# include <stdio.h>
# include <string.h>
int main()
{
    char s1[10],s2[10];
    char s3[15] = " and Vivek.";
    printf("Enter the name of two best friends : \n");
    gets(s1);
    gets(s2);
    printf("%s is the best friend of %s",s1,s2);
    printf("%s",s3);
    return 0;
}