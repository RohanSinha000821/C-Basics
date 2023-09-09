// WAP to make a parser.(Imp prog)
# include <stdio.h>
#include <string.h>
// In the function we are just manupulating the same string.
void parser(char * string)
{
    int in = 0; // Variable to track whether we are inside the tag.
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 0;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 1;
            continue;
        }
        if (in == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    // printf("%d\n",index);
    string[index] = '\0';

    // Remove trailing spaces fom beginning.
    while (string[0] == ' ')
    {
        // Shift the string to left 
        for (int i = 0; i < strlen(string); i++)
        {
                string[i] = string[i+1];
        }
        
    }
    // Remove trailing spaces fom end.
    while (string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
}
int main()
{
    char string[] = "  <h1>   This is heading       </h1>  ";
    parser(string);
    printf("The parsed string is ~~%s~~",string);
    return 0;
}

/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading 

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/ 