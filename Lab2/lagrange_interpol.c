// Write a program to approximate the functional value at any given x from given n no.
//  of  data using Lagrange’s interpolation.

#include <stdio.h>
#include <conio.h>

int main()
{
    // float x[]={2,5}, y[]={3,7}, xi=4, i, fx;
    // fx= (xi-x[1])/(x[0]-x[1])*y[0] +(xi-x[0])/(x[1]-x[0])*y[1];
    // printf("The value of fx is:%f",fx);

    float x[50], y[50], fx;
    int number, xp, i, j;
    printf("Enter number of data:");
    scanf("%d", &number);
    for (i = 0; i <= number; i++)
    {
        printf("x[%d] :");
        scanf("%d", &i);

        printf("y[%d]:");
        scanf("%d", &i);
    }

    printf("Enter value of interpolation point:%d", xp);
    scanf("%d", &xp);

    for (i = 0; i <= number; i++)
    {
        for (j = 0; j <= number; j++)
        {
            

        }
    }
}