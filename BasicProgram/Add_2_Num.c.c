//create a function which will add any 2 numbers using built in functions

#include <stdio.h>
#include <stdlib.h>

//Decleration of function

int Sum(int m, int n);

//Main function

int main()
{
    int a,b,sum;
    printf("Enter 2 nos. :\n");
    scanf("%d%d",&a,&b);
    sum=Sum(a,b);
    printf("\nSum of %d and %d is %d \n",a,b,sum);
    return 0;
}

//Defination of Function

int Sum(int m, int n)
{
    return (m+n);
}
