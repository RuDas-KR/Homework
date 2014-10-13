#include <stdio.h>
#include <stdlib.h>

int search(int *A, int size, int search_value);

int main(void) {
	int pay[] = {100, 150, 200, 250, 300}, size;
	size = sizeof(pay)/sizeof(pay[0]); // 20/4 = 5
	printf("월급이 200만원인 사람 : %d번째\n", search(pay, size, 200));
	return 0;
}

int search(int *A, int size, int search_value)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(A[i] == search_value)
			return i+1;
	}

	return search_value;
}
