# include <stdio.h>
int func(int *pointer){
    int s=0,sum=0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + *(pointer + i);
        s++;
    }
    printf("Value of sum is %d and s is %d\n",sum,s);
    return (sum/s);
}
int main()
{
    int arr[]={4,6,5,9};
    int avg = func(arr);
    printf("The avg of the array is %d\n",avg);
    //  printf("The avg of the array is %d\n",func(arr));
    return 0;
}