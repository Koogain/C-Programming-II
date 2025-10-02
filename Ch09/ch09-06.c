/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 09-06
   날짜 : 2025.09.29
*/

#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>		

int main(void)
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, ',.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}