#include <stdlib.h>
int main()
{
  int temp[5]={1,2,3,4,5};
 /// int (*p2)[5]= temp;
   int (*p2)[5]= &temp;  //这里需要一个真正的数据地址
  int i;
  for(i=0;i<5;i++)
  {
   printf("%d\n",*(*p2+i));
  }
  
  
-------------------------------------
  int temp[5]={1,2,3,4,5};
  int *p=temp;  //这个这个指向第一个元素的地址
  int i;
  for(i=0;i<5;i++)
  {
   printf("%d\n",*(p+i));
  }

  return 0;
}

