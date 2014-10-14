#include <stdio.h>
#include <stdlib.h>

void my_sort(int *a_array, int a_size, int *a_sort);

int main(void){
	int a[] = {9, 3, 5, 7, 1};
	int b[5];

	my_sort(a, 5, b);
}

void my_sort(int *a_array, int a_size, int *a_sort)
{
	int i, j, biggest;
	int size = sizeof(a_array)/sizeof(a_array[0]);
	
	for(i=0; i<size-1; i++)
		for(j=0; j<size; j++)
		{
			if(a_array[i] > a_array[j])
			{
				biggest = a_array[i];
				a_array[i] = a_array[j];
				a_array[j] = biggest;
			}
		}
	printf("정렬 후 데이터\n");
	for(i=0; i<size; i++)
		printf("%4d", a_array[i]);
	printf("\n");
}
