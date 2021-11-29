#include<stdio.h>
 int main()
 {
 int x;
 printf("请输入一个整数:\n");
 scanf("%d",&x);
   if(x%2==0)
   {
     printf("%d是偶数.",x);
   }
   else
   {
     printf("%d是奇数.",x);
   }
   return 0;
 }
