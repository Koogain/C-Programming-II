/* 파일명: Assignmment_01.c

   내용: 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램을 작성하시오.

   작성자: 구가인

   날짜: 2025.11.10

   버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp;                 // 파일 포인터 선언
    char filename[100];       // 파일 이름을 저장할 배열
    char line[256];           // 한 줄씩 읽을 문자열 배열
    int line_num = 1;         // 줄 번호 카운터 변수

    printf("파일명? ");
    scanf("%s", filename);    // 사용자로부터 파일 이름 입력받기

    fp = fopen(filename, "r"); // 파일 읽기 모드로 열기
    if (fp == NULL)            // 파일 열기 실패 시 오류 처리
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일 끝(EOF)에 도달할 때까지 한 줄씩 읽어서 출력
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%3d: %s", line_num, line); // 줄 번호와 내용 출력
        line_num++;                        // 줄 번호 증가
    }

    fclose(fp); // 파일 닫기
    return 0;   // 프로그램 정상 종료
}