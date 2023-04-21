#include <stdio.h>
#include <stdlib.h>

//C program to check Uppercase Lowercase or Digit or Special Characters

int main()
{
    char ch;
    printf("Enter character : \n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z'))
    {
        printf("Lowercase alphabet\n");
    }
    else if((ch >= 'A' && ch <= 'Z'))
    {
        printf(" Uppercase alphabet \n");
    }
    else if((ch >= '0' && ch <= '9'))
    {
        printf(" Digit \n");

    }
    else
    {
        printf(" Special character\n");
    }
    return 0;
}
