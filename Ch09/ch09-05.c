/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 09-05
   ��¥ : 2025.09.29
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
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);		// �Է¹��� �ܾ ���� ���� ���δ�.
		strcat(sentence, " ");		// �ܾ ������ �� �ֵ��� " "�� ���δ�.
	} while (strcmp(word, ".") != 0);	// "."�� �Էµ� ������ �ݺ��ϴ�.

	printf("%s\n", sentence);

	return 0;
}