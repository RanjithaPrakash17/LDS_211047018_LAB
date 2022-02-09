
#include "header.h"

void bubble(int a[], int size)
{
   int i,j,temp;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-1-i;j++)
      {
	      if(a[j] > a[j+1])
	      {
	         temp = a[j];
	         a[j] = a[j+1];
	         a[j+1] = temp;
	      }
      }
   }
}
