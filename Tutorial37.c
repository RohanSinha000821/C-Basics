# include <stdio.h>
# include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} harry,ravi,shubham; // Here the variables are used along with making of 
// the structure. 

// struct Student harry,ravi,shubham; 
// Here they are global variables. And declared after the structure is made.
int main()
{
    // struct Student harry,ravi,shubham; //Here Structure variables are local
    //variables and can called only inside main function.
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 98;      
    ravi.marks = 56; 
    shubham.marks = 70; 
    harry.fav_char = 'p';
    ravi.fav_char = 's';
    shubham.fav_char = 't';
    strcpy(harry.name,"Harry Potter");
    strcpy(shubham.name,"Shubham Rathore");
    printf("Harry name is %s.\n",harry.name);
    printf("Harry got %d marks.\n",harry.marks);

    printf("Shubham name is %s.\n",shubham.name);
    printf("Shubham got %d marks.\n",shubham.marks);
    // In this way we can print all details of the student.

    return 0;
}