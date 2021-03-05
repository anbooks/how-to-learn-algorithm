/*
斐波那契数列也成为兔子数列
兔子在出生两个月后，就由繁殖能力，一堆兔子每个月能生出一对兔子来。如果所有兔子都不死，那么一年以后可以繁殖多少对兔子？
顺序递推：从已知条件出发，逐步算出要解决问题的方法。
*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 13
int main()
{
    int i;
    long fib[NUM]={1,1};
    for(i=2;i<NUM;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];fei
    }

    //循环输出
    for(i=0;i<NUM;i++)
    {
        printf("第%d月兔子总数：%d\n",i,fib[i]);
    }
    getch();
    return 0;
}
