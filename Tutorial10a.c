#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int s,j;
    char S1[10],S2[10];
    printf("Enter P if passed in mathematics otherwise F\t");
    gets(S1);
    printf("Enter P if passed in science otherwise F\t");
    gets(S2);
    s=strcmp(S1,S2);
    j=strcmp(S1,"P");

    //printf("%d\n",s); this will give 0 only when both strings are same
    
    if (s==0)
    {
        printf("Congratulations you passed both the subjects and you get dairy milk silk bubbly worth Rs50");
    }
    else
    {
        if (j==0)
        {
            printf("You passed in Maths only and you get a lays worth Rs20");
        }
        else
        {
            printf("You passed in science only and you get a kurkure worth Rs20");
        }
        
    }
    return 0;
}
