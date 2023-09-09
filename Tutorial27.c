# include <stdio.h>
int main()
{
    int a=34;
    int* ptra = &a;
    printf("%d\n", ptra );
    printf("%d\n",ptra+2); 
    // ptra + 2 = ptra + 2*(size of int) //size of int is 4 byte here.
    printf("\n\n");
    char b='5';
    char* prt2 = &b;
    printf("%d\n",prt2);
    printf("%d\n",prt2+2);
    prt2--;
    printf("%d\n",prt2);
    prt2++;
    printf("%d\n",prt2);

    // prt2 + 2 = prt2 + 2*(size of char) // size of char is 1 byte here.
    // First prt2-- decreases the address by one and then by ptr++ the address is increased by one , hence the same as before.
    return 0;
}
