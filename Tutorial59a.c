// Example # define derivative 
# include <stdio.h>
# define PI 3.14
# define SQUARE(r) r*r
int main()
{
    float var = PI;
    float r = 4.23;
    printf("The value of PI is %0.2f\n",var);
    printf("The area of circle is %0.2f\n", PI * SQUARE(r));
    return 0;
}
