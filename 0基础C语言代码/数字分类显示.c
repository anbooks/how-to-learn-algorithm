#include<stdio.h>
int main()
{int n ;
scanf(“%d”,&n);
if(n<10&&n>0)
printf(“%d is <10\n”,n);
else if(n>=10&&n<=99)
printf(“%d is 10 to 99\n”,n);
else if(n>=100&&n<=999)
printf(“%d is 100 to 999\n”,n);
else if(n>=1000)
printf(“%d is >=1000\n”,n);
 return 0;
}
