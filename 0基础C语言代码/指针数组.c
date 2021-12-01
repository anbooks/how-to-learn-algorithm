#include <stdio.h>
int main()
{
  //是数组，里面是char * 类型的指针
  char *p1[5]={
      "ABCDEF",
      "是的发顺丰",
      "dsadfsdf",
      "sdfsdfdf"
};

int i;
  for(i=0;i<5;i++)
  {
    printf("%s\n",p1[i]);
  }
  return 0;
}
