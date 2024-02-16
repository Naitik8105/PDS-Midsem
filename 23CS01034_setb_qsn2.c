//this is the code for question-2
#include <stdio.h>

//Function to check if the number is perfect number or not
int perfectnum(int b)
{
    int sum = 0;

    for (int i = 1; i < b; i++)
    {
        if ((b % i) == 0)
        {
            sum += i;
        }
    }
    if (sum == b)
        return b;
    else
        return 0;
}
int main()
{
    int lowerlimit, upperlimit;
    int count=0;

    printf("Enter lower limit:");
    scanf("%d", &lowerlimit);

    printf("Enter Upper limit:");
    scanf("%d", &upperlimit);

    //Printing all perfect numbers in given range
    printf("Perfect numbers in given limits are:\n");
    for (int i = lowerlimit; i <= upperlimit; i++)
    {
        if (i == 1)
        {
            continue;
        }
        else if (i == perfectnum(i))
        {
            printf("%d ", i);
            count++;
        }
        else
            continue;
    }
    if(count==0)
        printf("There are no perfect numbers");
    return 0;
}