/* 
	학번 : 202511205
    이름 : 구가인
    프로그램 명 :  
    날짜 :
*/

/* 
	문제 : 기보드로부터 다음 레코드를 한 줄 입력받아 필드를 구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
    레코드 형식 : 이름 | 학번 | 학과 | 학년(정수)
    입력 종료 조건 : "exit" 입력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_record();

typedef struct student
{
    char name[24];
    char id[16];
	char major[32];
    int year;
} Student;

#define MAX_RECORDS 100

int main(void)
{
    Student users[MAX_RECORDS];

	input_record(&users[0]);

	return 0;
}

void input_record()
{
    Student users;
    char* token = NULL;

	char input_information[128];

	printf("이름 | 학번 | 학과 | 학년(정수) 형식으로 입력하세요.\n");
	scanf("%s", input_information);

    for (int i = 0; i < 4; i++)
    {
        if (token != NULL)
        {
            switch (i)
            {
            case 0:
                token = strtok(input_information, "|");
                strcpy(users.name, token);
                break;
            case 1:
                token = strtok(NULL, "|");
                strcpy(users.id, token);
                break;
            case 2:
                token = strtok(NULL, "|");
                strcpy(users.major, token);
                break;
            case 3:
                token = strtok(NULL, "|");
                users.year = atoi(token);
                break;
            default:
                break;
			}
        }
	}

	printf("이름: %s, 학번: %s, 학과: %s, 학년: %d\n", users.name, users.id, users.major, users.year);
}