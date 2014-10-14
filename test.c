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
	int i, biggest;
	biggest = a_array[0];

	for(i=0; i<a_size; i++){
		if(a_array[i]<biggest)
			biggest = a_array[i];
		i++;
	}
}
