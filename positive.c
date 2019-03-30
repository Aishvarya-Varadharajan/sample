#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number");
  scanf("%d\n",&num);
  if(num < 0)
  {
    printf("given no is positive");
  }
  else
  {
    printf("Given no is negative");
  }
  return 0;
  }
   
