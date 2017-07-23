#include<stdio.h>
void main()
{
  int n1,n2,i;
  scanf("%d%d",&n1,&n2);
  printf("Print the value from %d to %d\n",n1,n2);
  for(i=n1;i<=n2;i++)
  {
    if(i%2==0)
    printf("%d\n",i);
    else
    printf(" ");
  }
}
