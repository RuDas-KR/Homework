#include <stdio.h>
#include <stdlib.h>

void array_fill(int *A, int size);

int main(void) {
	int size, a[5];
	size = sizeof(a)/sizeof(a[0]);
	array_fill(a,size);
	return 0;
}

void array_fill(int *A, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		A[i] = rand()%10;
		printf("%d\n", A[i]);
	}
}