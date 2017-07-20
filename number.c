#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  if(n>0)
  printf("\n The number is positive");
  else if(n<0)
  printf("\n The number is negative");
  else
  printf("\n ZERO");
}
