#include<stdio.h>
void main()
{
  int n,count=0,r;
  printf("Enter the value");
  scanf("%d",&n);
  while(n)
  {
    r=n%10;
    n=n/10;
    count++;
  }
  printf("The count of digit is %d",count);
}
