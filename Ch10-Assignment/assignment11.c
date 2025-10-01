/* 
   학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming assignment 11
   프로그램 기능 : 영어 단어 끝말잇기 게임 프로그램
   프로그램 조건 : 이전에 입력된 단어의 마지막 문자로 시작하는지 검사하여 게임을 계속할지 종료할지 결정,
				   입력된 단어는 3글자 이상	이어야 함,
				   잘못된 단어 입력 시 지금까지 끝말잇기를 몇 번 역속 성공했는지 출력하고 종료
   날짜 : 2025.10.01
*/

// 처음 게임을 할 경우 게임이 실패하는 것 수정

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수의 원형 선언
void input_word(char* temp_word, char* word1, char* word2, int count);
void check_3length(char* word1, char* word2);
void check_lastchar(char* word1, char* word2, int count);

int main(void)
{
	char temp_word[100] = { 0 }; // 새로 입력된 단어
	char word1[100] = { 0 };	 // 새로 입력된 단어를 저장하는 변수
	char word2[100] = { 0 };	 // 이전에 입력된 단어를 저장하는 변수
	int count = 0; // 성공 횟수
	input_word(temp_word, word1, word2, count);
	return 0;
}

// 함수명 : input_word
// 기능 : 단어를 입력받아 검사 함수들을 호출
// 입력 : char* word
void input_word(char* temp_word, char* word1, char* word2, int count)
{
	printf("word? ");
	scanf("%s", temp_word);
	if (strcmp(temp_word, "종료") == 0)
	{
		printf("종료합니다.\n");
		return;
	}
	else
	{
		check_3length(temp_word, word1);
		check_lastchar(temp_word, word1, count);
		strcpy(word2, word1);
		strcpy(word1, temp_word);
		count++;
		input_word(temp_word, word1, word2, count);
	}
}

// 함수명 : check_3length
// 기능 : 단어의 길이가 3글자 이상인지 검사
void check_3length(char* word1, char* word2)
{
	int len = strlen(word1);
	if (len < 3)
	{
		printf("3글자 이상의 단어를 입력하세요.\n");
	}
	else
		return;
}

// 함수명 : check_lastchar
// 기능 : 이전 단어의 마지막 문자와 현재 단어의 첫 문자가 같은지 검사
void check_lastchar(char* word1, char* word2, int count)
{
	int len1 = strlen(word1);
	if (word1[len1 - 1] != word2[0])
	{
		printf("끝말잇기 실패! 지금까지 %d번 성공했습니다.\n", count);
		return;
	}
	else
		return;
}