#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char op;
    printf("Enter 1st numbers:\n");
    scanf("%d",&a);

    printf("Enter your choice : (+,-,*,/)\n");
    scanf("%s",&op);

    printf("Enter 2nd numbers:\n");
    scanf("%d",&b);

    switch(op)
    {
        case '+' :
                    printf("Addition of %d and %d is %d",a,b,a+b);
                    break;
        case '-' :
                    printf("Subtraction of %d and %d is %d",a,b,a-b);
                    break;
        case '*' :
                    printf("Multiplication of %d and %d is %d",a,b,a*b);
                    break;
        case '/' :
                    if (b == 0)
                    {
                        printf("Error: Cannot divide by zero");
                    }
                    else
                    {
                        printf("Division of %d and %d is %d",a,b,a/b);

                    }
                   break;
        default:
            printf("Error: Invalid operator");
    }

    return 0;
}
