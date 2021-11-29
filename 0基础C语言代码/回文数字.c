#include<stdio.h>
int  main( ) 
{
  long g,s,q,w,x;
  scanf("%ld",&x); 
  w=x/10000;
  q=x%10000/1000;
  s=x%100/10;
  g=x%10;
  if (g==w&&s==q) /*个位等于万位并且十位等于千位*/
  printf("%d is a huiwen \n"，x);
  else
  printf("%d is not a huiwen\n");
return 0;
}
