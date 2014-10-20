#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0x12345678; // int형 정수 x에 16진수 12345678을 선언
	unsigned char *xp = (char *)&x; // 포인터 xp에 x의 주소값을 저장
	printf("¹바이트 순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	// xp가 가르키는 값 출력.
	// unsigned char형 포인터임으로 1바이트씩 출력
	return 0;
}
