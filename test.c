#include <stdio.h>
#include <stdlib.h>

void my_sort(int *a, int size);

int main(void){
   int a[] = {9, 3, 5, 7, 1};
   my_sort(a, 5);
}

void my_sort(int *a, int size)
{
   int i, j, tmp;
    for(i=0; i<size; i++)
    {
       for(j=i+1; j<size; j++)
       {
       	   if(a[i] > a[j])
       	   {
       	   	tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
       	   }
       }
    }
   printf("정렬 후 데이터\n");
   for(i=0; i<size; i++)
      printf("%4d", a[i]);
   printf("\n");
}
