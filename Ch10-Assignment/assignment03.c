/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming assignment 03
   프로그램 기능 : 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램
   날짜 : 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수의 원형 선언
void input_str(char* str);		
void tran_str(char* str);

int main(void)
{
	char str[100];
	input_str(str);
	return 0;
}

// 함수명 : input_str
// 기능 : 문자열을 입력받아 소문자, 대문자 판별 함수 호출
// 입력 : char* str 
void input_str(char* str)
{
	printf("문자열? ");
	scanf("%s", str);

	if (strcmp(str, "종료") == 0)
	{
		printf("종료합니다.\n");
		return;
	}
	else
		tran_str(str);
}

// 함수명 : tran_str
// 기능 : 소문자는 대문자로, 대문자는 소문자로 변환
void tran_str(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') // 소문자이면
			str[i] = str[i] - ('a' - 'A'); // 대문자로 변환
		else if (str[i] >= 'A' && str[i] <= 'Z') // 대문자이면
			str[i] = str[i] + ('a' - 'A'); // 소문자로 변환
		i++;
	}
	printf("변환된 문자열 : %s\n", str);
	input_str(str); // 다시 문자열 입력받기
}



