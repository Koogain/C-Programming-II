/* 파일명: Assignmment_03.c

   내용: 텍스트 파일의 이름을 입력받아서 파일 내의 문자들에 대하여 영문자의 개수를 문자별로 세서 출력하는 프로그램을 작성하시오.
		 (문자의 개수를 셀 때는 대소문자를 구분하지 않는다.)

   작성자: 구가인

   날짜: 2025.11.10

   버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  // isalpha, tolower 사용

 // 파일의 내용을 출력하고, 각 알파벳 빈도를 세는 함수
void printFileAndCountLetters(const char* filename) 
{
    FILE* fp;
    int count[26] = { 0 };  // 알파벳 개수 저장 배열
    int ch;

    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    printf("\n[ 파일 내용 ]\n");

    // 파일을 한 글자씩 읽기
    while ((ch = fgetc(fp)) != EOF) 
    {
        putchar(ch);  // 파일 내용 출력

        if (isalpha(ch)) 
        {           // 영문자일 경우만
            ch = tolower(ch);        // 소문자로 통일
            count[ch - 'a']++;       // 해당 문자 카운트 증가
        }
    }

    fclose(fp);

    // 결과 출력
    printf("\n\n[ 알파벳 개수 통계 ]\n");
    for (int i = 0; i < 26; i++) 
    {
        printf("%c: %d    ", 'a' + i, count[i]);
        if ((i + 1) % 6 == 0) printf("\n"); // 보기 좋게 6개씩 줄바꿈
    }
    printf("\n");
}

int main(void) 
{
    char filename[100];

    printf("파일명? ");
    scanf("%s", filename);

    printFileAndCountLetters(filename);

    return 0;
}