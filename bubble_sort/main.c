#include <stdio.h>
//#include <conio.h>
#include "header.h"

void main()
{
   int a[10] = {9,10,3,2,1,6,4,8,7,5};
   int i;
   //clrscr();
   bubble(a,10);
   printf("Sorted array: ");
   for(i=0;i<10;i++)
      printf("%d ",a[i]);
   getch();
}
