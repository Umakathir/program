#include<stdio.h>
void main()
{
  int n,sum=0,i;
  printf("Enter the number\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  printf("%d\n",sum);
}
