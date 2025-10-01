/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 09-01
   날짜 : 2025.09.29
*/

#include <stdio.h>

int main(void)
{
	char str1[10] = { 'a', 'b', 'c'};
	char str2[10] = "abc";
	char str3[] = "abc";
	char str4[] = "very long string";
	int size = sizeof(str1) / sizeof(str1[0]);
	int i;

	printf("str1 = ");
	for (i = 0; i < size; i++)
		printf("%c ", str1[i]);
	printf("\n");

	printf("str2 = %s\n", str2);
	printf("str3 = ");
	printf(str3);
	printf("\n");

	printf("str4 = %s\n", str4);

	return 0;
}
