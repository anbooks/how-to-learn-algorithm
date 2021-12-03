#include <stdio.h>

void quick_sort(int  array[],int left ,int right )
{
  int i=left,j=right;
  int temp;
  int pivot;
  
  pivot=array[(left+rigth)/2];
  
  while(i<=j)
  {
        while(array[i]<pivot)
        {
         i++;
        }
        while(array[j]>pivot)
        {
         j--;
        }
        if(i<=j)
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j--;
        }
  }
  
  if(left<j)
  {
    qucik_sort(array,left,j);
  }
  
  if(i<right)
  {
   quick_sort(array,i,right);
  }





}


int main(void)
{
  int array[]={73,108,111,11,78,105,115,104,67,46,99,11,109};
  int i,length;
  
  length=sizeof(array)/sizeof(array[0]);
  
  quick_sort(array,0,length-1);
  
  return 0;





}
