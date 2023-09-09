/* 
kms to miles
inches to feet
cms to inches
pound to kgs
inches to meters
*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 0;;)
    {
        printf("\nPress 1 if you want to convert kms to miles\n");
        printf("Press 2 if you want to convert inches to feet\n");
        printf("Press 3 if you want to convert cms to inches\n");
        printf("Press 4 if you want to convert pounds to kg\n");
        printf("Press 5 if you want to convert inches to meters\n");
        printf("Press 6 to exit\n");
        int n;
        float a;
        printf("Enter your choice\n");
        scanf("%d", &n);
        if (n==6)
        {
            printf("You have exit from the program");
            break;
        }
        
        switch (n)
        {
        case 1:
            printf("Enter in kms ");
            scanf("%f", &a);
            printf("After conversion in miles the value is %0.2f\n", (float)a * 0.621);
            break;
        case 2:
            printf("Enter in inches ");
            scanf("%f", &a);
            printf("After conversion in feet the value is %0.2f\n", (float)a * 0.0833);
            break;
        case 3:
            printf("Enter in cms ");
            scanf("%f", &a);
            printf("After conversion in inches the value is %0.2f\n", (float)a * 0.0394);
            break;
        case 4:
            printf("Enter in pounds ");
            scanf("%f", &a);
            printf("After conversion in kg the value is %0.2f\n", (float)a * 2.205);
            break;
        case 5:
            printf("Enter in inches ");
            scanf("%f", &a);
            printf("After conversion in meters the value is %0.2f\n", (float)a * 0.0254);
            break;

        default:
            printf("Enter a valid choice\n");
            break;
        }
    }
    return 0;
}
