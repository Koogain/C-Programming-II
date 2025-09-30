/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 07-03
   날짜 : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i;

	printf("arr =");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;

}