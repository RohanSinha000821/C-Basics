// How to input in a charcter array
# include <stdio.h>
int main()
{
   char str[34];
   gets(str);
   printf("Using printf to print above input string : %s\n",str); 
   printf("Using another function to print above input string is puts : ");
   puts(str);
   return 0;
}