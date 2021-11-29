#include<stdio.h>
 int main()
 {
   char x,y ;
   printf("enter x:\n");
   scanf("%c",&x);
 if(x>='a' && x<='z')
 {
   y=x-32;
 }
 else if(x>='A' && x<='Z')
 {
 y=x+32;
 }
 printf("x=%c, y=%c\n",x,y);
 return 0;
 }
