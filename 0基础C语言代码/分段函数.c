#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
scanf("%f",&x);
if(x<=0)
{
y=0;
}
else if(x<=10)
{
y=x;
}
else
{
y=0.5+sin(x);
}
printf("x=%f,y=%f\n",x,y);
return 0;
}

