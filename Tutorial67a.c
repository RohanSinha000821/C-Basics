# include <stdio.h>
# include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");
    char str[4];
    fgets(str,5,ptr);
    printf("The string is %s\n",str);

    // The below functions will work when we open file in write mode
    // and w+,a+,a,r+ these modes.
    // fputc('o',ptr);
    // fputs("this is harry",ptr);

    fclose(ptr);
    return 0;
}