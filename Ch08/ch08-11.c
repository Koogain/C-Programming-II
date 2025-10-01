/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 08-11
   날짜 : 2025.09.23
*/

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };		// 포인터 배열
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);				//arr[i]는 포인터이다.
	}
	printf("\n");

	return 0;
}