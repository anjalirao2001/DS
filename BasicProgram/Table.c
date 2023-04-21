#include <stdio.h>
#include <stdlib.h>

// Write a C program to Print the Multiplication Table of N.

int main()
{
    int num,i;
    printf("\nEnter a number to find Table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,i*num);
    }
    return 0;
}
