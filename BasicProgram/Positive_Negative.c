#include <stdio.h>
#include <stdlib.h>

//Program to Check Number is Positive or Negative.


int main()
{
    int num;
    printf("\n Enter a number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("\n Number is Positive \n");
    }
    else if(num == 0)
    {
        printf("\n Number is Zero \n");
    }
    else
    {
        printf("\n Number is Negative \n");
    }

    return 0;
}
