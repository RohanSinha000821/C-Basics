#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, n1, l, mid, n, search, arr[100];
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter %d integers:\n", n);
   for (a = 0; a < n; a++)
      scanf("%d",&arr[a]);
   printf("Enter the value to find in array:\n");
   scanf("%d", &search);
   n1 = 0;
   l = n - 1;
   mid = (n1+l)/2;
   while (n1 <= l) {
      if (arr[mid] < search)
         n1 = mid + 1;
      else if (arr[mid] == search) {
         printf("%d is present at index %d.\n", search, mid+1);
         break;
      }
      else
         l = mid - 1;
      mid = (n1 + l)/2;
   }
   if (n1 > l)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;
}