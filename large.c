#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the values");
  scanf("%d\n%d\n%d\n",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("%d is big",a);
  else if((b>a)&&(b>c))
  printf("%d is big",b);
  else
  printf("%d is big",c);
}
