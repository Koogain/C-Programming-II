/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming assignment 04
   ���α׷� ��� : ���ڿ��� �������� ����� reverse_string �Լ��� �ۼ��ϰ� �Լ��� �̿��� �Է¹��� �� ���� ���ڿ��� �������� ����ϴ� ���α׷�
   ��¥ : 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �Լ��� ���� ����
void input_str(char* str);			
void reverse_string(char* str);

int main(void)
{
	char str[100];
	input_str(str);

	return 0;
}

// �Լ��� : input_str
// ��� : ���ڿ��� �Է¹޾� �����ϰų� ���ڿ� ���� �Լ� ȣ��
// �Է� : char* str
void input_str(char* str)
{
	printf("���ڿ�? ");
	gets(str);
	if (strcmp(str, "����") == 0)
	{
		printf("�����մϴ�.\n");
		return;
	}
	else
		reverse_string(str);
}

// �Լ��� : reverse_string
// ��� : ���ڿ��� �������� ��ȯ
void reverse_string(char* str)
{
	int len = strlen(str);		// ���ڿ��� ���� ���
	char rev[100];				// ���� ���ڿ��� ������ �迭
	int i;
	for (i = 0; i < len; i++)
	{
		rev[i] = str[len - 1 - i]; // �������� ����
	}
	rev[len] = '\0'; // ���ڿ��� ���� ��Ÿ���� �� ���� �߰�
	printf("�������� �� ���ڿ� : %s\n", rev);
	input_str(str); // �ٽ� ���ڿ� �Է¹ޱ�
}