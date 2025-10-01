/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming assignment 04
   프로그램 기능 : 문자역을 역순으로 만드는 reverse_string 함수를 작성하고 함수를 이용해 입력받은 한 줄의 문자열을 역순으로 출력하는 프로그램
   날짜 : 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수의 원형 선언
void input_str(char* str);			
void reverse_string(char* str);

int main(void)
{
	char str[100];
	input_str(str);

	return 0;
}

// 함수명 : input_str
// 기능 : 문자열을 입력받아 종료하거나 문자열 역순 함수 호출
// 입력 : char* str
void input_str(char* str)
{
	printf("문자열? ");
	gets(str);
	if (strcmp(str, "종료") == 0)
	{
		printf("종료합니다.\n");
		return;
	}
	else
		reverse_string(str);
}

// 함수명 : reverse_string
// 기능 : 문자열을 역순으로 변환
void reverse_string(char* str)
{
	int len = strlen(str);		// 문자열의 길이 계산
	char rev[100];				// 역순 문자열을 저장할 배열
	int i;
	for (i = 0; i < len; i++)
	{
		rev[i] = str[len - 1 - i]; // 역순으로 복사
	}
	rev[len] = '\0'; // 문자열의 끝을 나타내는 널 문자 추가
	printf("역순으로 된 문자열 : %s\n", rev);
	input_str(str); // 다시 문자열 입력받기
}