/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 09-05
   날짜 : 2025.09.29
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[100] = "";
	char word[20];

	do 
	{
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);		// 입력받은 단어를 문장 끝에 붙인다.
		strcat(sentence, " ");		// 단어를 구분할 수 있도록 " "을 붙인다.
	} while (strcmp(word, ".") != 0);	// "."이 입력될 때까지 반복하다.

	printf("%s\n", sentence);

	return 0;
}