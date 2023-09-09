# include <stdio.h>
# include <string.h>
typedef struct student{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
int main()
{
    std s1,s2; //using typedef we can write  like this rather writing struct student.
    // But both will be a valid datatype and can be used in any function.
    // struct student s1,s2;
    s1.id=54;
    s2.id=26;
    printf("The id of s1 is %d\n",s1.id);
    printf("The id of s2 is %d\n",s2.id);
    return 0;
}