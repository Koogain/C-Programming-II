/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 07-04
   날짜 : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int amount[5] = { 1, 1, 5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price =");
	for (i = 0; i < 5; i++)
		printf("%d ", price[i]);
	printf("\n");

	return 0;

}