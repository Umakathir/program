#include<stdio.h>
void main()
{
  char ch;
  printf("Enter the character\n");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("The character is vowel");
  }
  else
  {
    printf("The character is consonant");
  }
}
