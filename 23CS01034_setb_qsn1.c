//this is the code for question number-1
#include <stdio.h>
int main()
{
    float radius, height;

    printf("Enter radius of the cylinder:\n");
    scanf("%f", &radius);

    printf("Enter height of the cylinder\n");
    scanf("%f", &height);

    printf("The volume of the cylinder is:%.2f \n", (3.14 * radius * radius * height));
    printf("The surface area of the cylinder is:%.2f \n", ((2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius)));
    return 0;
}