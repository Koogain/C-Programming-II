/* 
   �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming assignment 11
   ���α׷� ��� : ���� �ܾ� �����ձ� ���� ���α׷�
   ���α׷� ���� : ������ �Էµ� �ܾ��� ������ ���ڷ� �����ϴ��� �˻��Ͽ� ������ ������� �������� ����,
				   �Էµ� �ܾ�� 3���� �̻�	�̾�� ��,
				   �߸��� �ܾ� �Է� �� ���ݱ��� �����ձ⸦ �� �� ���� �����ߴ��� ����ϰ� ����
   ��¥ : 2025.10.01
*/

// ó�� ������ �� ��� ������ �����ϴ� �� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �Լ��� ���� ����
void input_word(char* temp_word, char* word1, char* word2, int count);
void check_3length(char* word1, char* word2);
void check_lastchar(char* word1, char* word2, int count);

int main(void)
{
	char temp_word[100] = { 0 }; // ���� �Էµ� �ܾ�
	char word1[100] = { 0 };	 // ���� �Էµ� �ܾ �����ϴ� ����
	char word2[100] = { 0 };	 // ������ �Էµ� �ܾ �����ϴ� ����
	int count = 0; // ���� Ƚ��
	input_word(temp_word, word1, word2, count);
	return 0;
}

// �Լ��� : input_word
// ��� : �ܾ �Է¹޾� �˻� �Լ����� ȣ��
// �Է� : char* word
void input_word(char* temp_word, char* word1, char* word2, int count)
{
	printf("word? ");
	scanf("%s", temp_word);
	if (strcmp(temp_word, "����") == 0)
	{
		printf("�����մϴ�.\n");
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

// �Լ��� : check_3length
// ��� : �ܾ��� ���̰� 3���� �̻����� �˻�
void check_3length(char* word1, char* word2)
{
	int len = strlen(word1);
	if (len < 3)
	{
		printf("3���� �̻��� �ܾ �Է��ϼ���.\n");
	}
	else
		return;
}

// �Լ��� : check_lastchar
// ��� : ���� �ܾ��� ������ ���ڿ� ���� �ܾ��� ù ���ڰ� ������ �˻�
void check_lastchar(char* word1, char* word2, int count)
{
	int len1 = strlen(word1);
	if (word1[len1 - 1] != word2[0])
	{
		printf("�����ձ� ����! ���ݱ��� %d�� �����߽��ϴ�.\n", count);
		return;
	}
	else
		return;
}