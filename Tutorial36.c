# include <stdio.h>
void reversearr(int arr[]){
    for (int i = 0; i < 7/2; i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ,",arr[i]);
    }
}

/*
Another way to define the function using a pointer.

void reversearr(int *ptr){
    for (int i = 0; i < 7/2; i++)
    {
        int temp;
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+6-i);
        *(ptr+6-i)=temp;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ,",*(ptr+i));
    }
}
*/
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("\n");
    reversearr(arr);
    
    return 0;
}