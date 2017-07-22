#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  if(n>=0)
  {
    n=n*(n+1)/2;
    printf("Sum=%d",n);
  }
}
