/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 08-01
   날짜 : 2025.09.23
*/

#include <stdio.h>

int main(void)
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %zd\n", sizeof(pi));
	printf("sizeof(pd) = %zd\n", sizeof(pd));
	printf("sizeof(pc) = %zd\n", sizeof(pc));

	printf("sizeof(int*) = %zd\n", sizeof(int*));
	printf("sizeof(double*) = %zd\n", sizeof(double*));
	printf("sizeof(char*) = %zd\n", sizeof(char*));

	return 0;
}