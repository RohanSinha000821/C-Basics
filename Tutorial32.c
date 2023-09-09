# include <stdio.h>
int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n",i,array[i]);
    }
    // array[0]=32;  // Very imp point that if you chaange any value here 
    // in the function then it will be reflected in main().
    return 0;
}

void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("Th value at %d is %d\n",i,ptr[i]); // *(ptr+i) will also 
        // print all elements.
    }
    // *(ptr+2) = 54; // This change the value at index 2 in arr in the main().
    
}
void func3(int array[2][2]){
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at position [%d,%d] is %d\n",i+1,j+1,array[i][j]);
        }
        
    }
}

int main()
{
    // int arr[] = {23, 13, 3, 4};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);

    //func2(arr);
    // func2(arr);

    int arr[2][2] = {{2,3},{9,3}};
    func3(arr); 
    return 0;
}