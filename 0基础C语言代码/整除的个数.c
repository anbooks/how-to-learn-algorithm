#include<stdio.h>
int main()
{
  int a,b;
  a=0;
  printf(“Enter number:”);
  scanf(“%d”,&b);
  if(b%3==0) a++;
  if(b%5==0) a++;
  if(b%7==0) a++;
  if(a==0) printf(“\n The number which can be divided exactly by none\n”);
  if(a==1) printf(“\n The number which can be divided exactly by one\n”);
  if(a==2) printf(“\n The number which can be divided exactly by two\n”);
  if(a==3) printf(“\n The number which can be divided exactly by all\n”);

  return 0;
}
