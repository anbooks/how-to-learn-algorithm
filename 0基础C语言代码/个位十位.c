#include<stdio.h>
int main( ) 
{
  int x, a,b,c;
  for(x=0;x<1000;x++)
  {
   a=x/100;
  b=x%100/10;
  c=x%10;
  if (b==1)
  {
    if (c==3||c==7)
    {
      printf("the number is %d \n",x);
     }
  }
  }
 
  return 0;
 }
