#include<stdio.h>
void main()
{
  int n,fact=1,i;
  printf("Enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("The factorial of %d is %d\n",n,fact); 
}
