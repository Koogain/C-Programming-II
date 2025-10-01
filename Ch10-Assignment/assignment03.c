/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming assignment 03
   ���α׷� ��� : �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷�
   ��¥ : 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �Լ��� ���� ����
void input_str(char* str);		
void tran_str(char* str);

int main(void)
{
	char str[100];
	input_str(str);
	return 0;
}

// �Լ��� : input_str
// ��� : ���ڿ��� �Է¹޾� �ҹ���, �빮�� �Ǻ� �Լ� ȣ��
// �Է� : char* str 
void input_str(char* str)
{
	printf("���ڿ�? ");
	scanf("%s", str);

	if (strcmp(str, "����") == 0)
	{
		printf("�����մϴ�.\n");
		return;
	}
	else
		tran_str(str);
}

// �Լ��� : tran_str
// ��� : �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ
void tran_str(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') // �ҹ����̸�
			str[i] = str[i] - ('a' - 'A'); // �빮�ڷ� ��ȯ
		else if (str[i] >= 'A' && str[i] <= 'Z') // �빮���̸�
			str[i] = str[i] + ('a' - 'A'); // �ҹ��ڷ� ��ȯ
		i++;
	}
	printf("��ȯ�� ���ڿ� : %s\n", str);
	input_str(str); // �ٽ� ���ڿ� �Է¹ޱ�
}



