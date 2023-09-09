# include <stdio.h>
# include <string.h>
union student{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union student s1,s2,s3,s4;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name,"Harry"); // The last input in a member of union is only active and if we 
    //print the value of others then it will give a corrupt value.

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
    printf("\n\n\n");

    s2.marks = 45;
    s2.fav_char = 'u';
    strcpy(s2.name,"Harry");
    s2.id = 1; // Here only id value will be correct as it is active and others value is 
    // corrupted as we are using unions.

    printf("The id is %d\n",s2.id);
    printf("The marks is %d\n",s2.marks);
    printf("The fav_char is %c\n",s2.fav_char);
    printf("The name is %s\n",s2.name);
    printf("\n\n"); 
    
    s3.id = 3;
    printf("The id is %d\n",s3.id);
    s3.marks = 58;
    printf("The marks is %d\n",s3.marks);
    s3.fav_char = 'u';
    printf("The fav_char is %c\n",s3.fav_char);
    printf("\n\n");

    s4.id = 4;
    printf("The id is %d\n",s4.id);
    s4.marks = 96;
    s4.fav_char = 'f'; // Fav_char is active so it's value is shown correctly.
    printf("The marks is %d\n",s4.marks);
    printf("The fav_char is %c\n",s4.fav_char);
    return 0;
}