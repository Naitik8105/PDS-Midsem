//this is the code for question-4
#include <stdio.h>

int compositenum(int a);
int main()
{
    int num;
    int count=0;

    printf("Enter the number:\n");
    scanf("%d", &num);

    int a[num], b[num];

    //Storing all possible pairs for given numbers 
    for (int i = 0; i < (num / 2); i++)
    {
        a[i] = (i + 1);
        b[i] = (num - (i + 1));
    }

    //Finding and Printing all possible pairs with given condition
    for (int i = 0; i < (num / 2); i++)
    {
        if ((compositenum(a[i])) && (compositenum(b[i])))
        {
            printf("%d %d \n", a[i], b[i]);
            count++;
        }
        else
        {
            continue;
        }
    }

    if(count==0)
        printf("There are no such pairs.");
    return 0;
}
//Function to check if the number is composite or not
int compositenum(int a)
{
    for (int i = 2; i < a; i++)
    {
        if ((a % i) == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}