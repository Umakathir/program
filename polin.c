#include<stdio.h>
void main()
{
  int n,remain,rev=0,temp;
  printf("Enter the number");
  scanf("%d",&n);
  temp=n;
  while(n)
  {
    remain=n%10;
    rev=rev*10+remain;
    n=n/10;
  }
  if(rev==temp)
  printf("The number is polindrome");
  else
  printf("The number is not polindrome");
}
