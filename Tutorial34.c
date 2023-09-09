# include <stdio.h>
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    // char str[] = {'h','a','r','r','y','\0'};
    char str[6] = "harry";  // The beside syntax is same as above one as
    // it also creates a null teminated character array.
    printstr(str);
    return 0;
}