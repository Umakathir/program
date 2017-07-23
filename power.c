#include<stdio.h>
void main()
{
  int i,base,ex,res;
  printf("Enter the base and exponant");
  scanf("%d%d",&base,&ex);
  for(i=0;i<=ex;i++)
  res=base*base;
  printf("The value is %d",res);
}
