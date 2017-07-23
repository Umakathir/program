#include<stdio.h>
void main()
{
  int n,i,val;
  printf("Enter the table\n");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    val=n*i;
    printf("%d*%d=%d\n",i,n,val);
  }
}
