#include <stdio.h>
#include <stdlib.h>

void array_add(int *A, int *B, int *C, int size);

int main(void) {

	int pay[5], bonus[5], total[5], i;

	for(i=0; i<5; i++){
		printf("월급과 보너스를 입력:\n");
		scanf("%d %d", &pay[i], &bonus[i]);
	}

	array_add(pay, bonus, total, 5);
	return 0;
}

void array_add(int *A, int *B, int *C, int size)
{
	int i;

	for(i=0; i<size; i++)
		C[i] = A[i] + B[i];

	printf("%d 만원\n", C[i]);
}
