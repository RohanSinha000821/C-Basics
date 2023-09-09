# include <stdio.h>
int main()
{
    // Reading a file
    FILE *ptr = NULL;
    char string[34];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("The content of this file is : %s\n",string);
    return 0;
}