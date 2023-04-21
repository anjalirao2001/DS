#include<stdio.h>
int main()
{
  int num, i, fact = 1;
  
  printf("\nEnter any Integer Value\n");
  scanf("%d", &num);
  
  for(i = 1; i <= num; i++)
  {
     fact = fact * i;
  }
  
  printf("Factorial of %num is %d",num,fact);
  return 0;
}
