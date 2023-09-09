#include <stdio.h>
int main()
{
    // Writing a file
    /*
    FILE *ptr = NULL;
    char string[84] = "This content was provided by Tutorial64a.c";
    ptr = fopen("myfile.txt","w");
    fprintf(ptr,"%s",string);
    */
    /* The above codes will delete the previous content of the file
    and rewrite the file with the new content added to it. */

    // Appending in file
    /*
    FILE *ptr = NULL;
    char string[84] = "This content was provided by Tutorial64a.c";
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);
    */
    /* The above codes will not delete the previous content rather append 
   the string which is written in the codes */
    return 0;
}