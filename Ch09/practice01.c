/* 
	�й� : 202511205
    �̸� : ������
    ���α׷� �� :  
    ��¥ :
*/

/* 
	���� : �⺸��κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带 �����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    ���ڵ� ���� : �̸� | �й� | �а� | �г�(����)
    �Է� ���� ���� : "exit" �Է�
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

	printf("�̸� | �й� | �а� | �г�(����) �������� �Է��ϼ���.\n");
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

	printf("�̸�: %s, �й�: %s, �а�: %s, �г�: %d\n", users.name, users.id, users.major, users.year);
}