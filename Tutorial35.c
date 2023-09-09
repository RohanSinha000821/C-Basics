# include <stdio.h>
# include <string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    // puts(strcat(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("A reversed string s1 is : %s\n",strrev(s1));
    printf("A reverse of s2 using puts statement : ");
    puts(strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The strcmp for s1 , s2 returned %d",strcmp(s1,s2));
    return 0;
}