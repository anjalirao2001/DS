#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Program to read integer and print First Three Powers (N^1, N^2, N^3)

int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
//    printf("\n %d^1 = %d \n %d^2 = %d \n %d^3 =%d\n",num,num,num,num*num,num,num*num*num);
    printf("%d , %d , %d",num,num*num,num*num*num);
    return 0;
}
