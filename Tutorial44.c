/*
You manage a travel agency and you want n drivers to input their details.
1. Name 
2. Driving License No
3. Route 
4. Kms 
Your program should be able to take n as input and your drivers will start 
inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
Use Structures.
*/

# include <stdio.h>
# include <string.h>
typedef struct Drivers{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
}dr;

int main()
{
    dr d1,d2,d3;
    printf("Enter the details of the driver No 1 :-\n");
    printf("Enter the name of the first driver\n");
    scanf("%s",&d1.name);
    printf("Enter the dlno of the first driver\n");
    scanf("%s",&d1.dlno);
    printf("Enter the route of the first driver\n");
    scanf("%s",&d1.route);
    printf("Enter the number of kms of the first driver\n");
    scanf("%d",&d1.kms);


    printf("Enter the details of the driver No 2 :-\n");
    printf("Enter the name of the second driver\n");
    scanf("%s",&d2.name);
    printf("Enter the dlno of the second driver\n");
    scanf("%s",&d2.dlno);
    printf("Enter the route of the second driver\n");
    scanf("%s",&d2.route);
    printf("Enter the number of kms of the second driver\n");
    scanf("%d",&d2.kms);


    printf("Enter the details of the driver No 3 :-\n");
    printf("Enter the name of the third driver\n");
    scanf("%s",&d3.name);
    printf("Enter the dlno of the third driver\n");
    scanf("%s",&d3.dlno);
    printf("Enter the route of the third driver\n");
    scanf("%s",&d3.route);
    printf("Enter the number of kms of the third driver\n");
    scanf("%d",&d3.kms);
    printf("\n\n");
    
    printf("****** Printing Information of these Drivers********\n");
    printf("For Driver No 1:\nName is %s\n",d1.name);
    printf("DL number  is %s\n",d1.dlno);
    printf("Route is %s\n",d1.route);
    printf("Kms is %d\n",d1.kms);

    printf("For Driver No 2:\nName is %s\n",d1.name);
    printf("DL number  is %s\n",d2.dlno);
    printf("Route is %s\n",d2.route);
    printf("Kms is %d\n",d2.kms);

    printf("For Driver No 3:\nName is %s\n",d3.name);
    printf("DL number  is %s\n",d3.dlno);
    printf("Route is %s\n",d3.route);
    printf("Kms is %d\n",d3.kms);
    return 0;
}