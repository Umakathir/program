#include<stdio.h>
void main()
{
  int yr;
  printf("Enter the year");
  scanf("%d",&yr);
  if(yr%4==0)
  printf("%d is leap year",yr);
  else
  printf("%d is not a leap year",yr);
}
