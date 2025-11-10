/* 파일명: Assignmment_04.c

   내용: 아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 LOGIN 구조체 배열로 읽어온 다음, 입력 받은 아이디와 패스워드가 일치하면 "로그인 성공" 아니면 "로그인 실패"라고 출력하는 프로그램을 작성하시오.
		 (테그스 파일의 형식은 다음과 같다
		 [paasword.txt]
		 guest idonknow
		 sugasuga bts_awesome
		 rapmonster_spring@day
		 jimin lovearmy

   작성자: 구가인

   날짜: 2025.11.10

   버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 10  // 구조체 배열 크기

 // 로그인 정보 구조체
typedef struct 
{
    char id[30];
    char pw[30];
} LOGIN;

// 파일에서 로그인 정보 읽기
int loadLoginData(LOGIN users[], const char* filename) 
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }

    int count = 0;
    // 파일 끝까지 id와 pw를 읽어 구조체 배열에 저장
    while (fscanf(fp, "%s %s", users[count].id, users[count].pw) == 2) 
    {
        count++;
        if (count >= SIZE) break; // 최대 SIZE까지만 저장
    }

    fclose(fp);
    return count; // 읽은 개수 반환
}

// 로그인 검사 함수
void checkLogin(LOGIN users[], int count, const char* input_id, const char* input_pw) 
{
    for (int i = 0; i < count; i++) {
        if (strcmp(users[i].id, input_id) == 0 && strcmp(users[i].pw, input_pw) == 0) 
        {
            printf("로그인 성공\n");
            return;
        }
    }
    printf("아이디를 찾을 수 없습니다.!\n");
}

int main(void) 
{
    LOGIN users[SIZE];
    char id[30], pw[30];
    int count;

    // 파일에서 데이터 읽기
    count = loadLoginData(users, "password.txt");

    printf("ID? ");
    scanf("%s", id);
    printf("Password? ");
    scanf("%s", pw);

    checkLogin(users, count, id, pw);

    return 0;
}