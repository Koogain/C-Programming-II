/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 09-07
   날짜 : 2025.09.29
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prfix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);

	return 0;
}
