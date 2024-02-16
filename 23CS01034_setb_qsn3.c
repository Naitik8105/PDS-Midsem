//this is the code for question-3
#include <stdio.h>
#include <math.h>

//Function to calculate distance between any two points whose coordinates are given
float distance(float x1, float y1, float x2, float y2)
{
    float dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return dist;
}
int main()
{
    float radius;
    float x, y, x1, y1;

    printf("Enter Radius of the circle:\n");
    scanf("%f", &radius);

    printf("Enter coordinates(x,y) of the circle:\n");
    scanf("%f %f", &x, &y);

    printf("Enter coordinates(x1,y1) of the point:\n");
    scanf("%f %f", &x1, &y1);

    if (distance(x, y, x1, y1) < radius)
    {
        printf("The point is inside the circle");
    }
    else if (distance(x, y, x1, y1) == radius)
    {
        printf("The point is on the circle");
    }
    else
    {
        printf("The point is outside the circle");
    }
    return 0;
}