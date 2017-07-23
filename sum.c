#include<stdio.h>
void main()
{
  int n=0;i,num;
  printf("Enter the number");
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
    n=i+n;
    if(i==num)
    printf("sum=%d",n);
  }
}
