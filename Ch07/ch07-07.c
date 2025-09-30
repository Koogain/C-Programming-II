/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 07-07
   날짜 : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };
	int i;

	// y = x;

	for (i = 0; i < 5; i++)
		printf("%d ", y[i]);
	printf("\n");

	return 0;

}