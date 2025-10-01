/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 09-13
   ��¥ : 2025.09.29
*/

#include <stdio.h>
#include <string.h>

int swap_string(char* lhs, char* rhs, int size);

#define MAX 5
#define BUF_SZ 30

int main(void)
{
	char books[MAX][BUF_SZ] =
	{
		"wonder",
		"me before you",
		"the hnger games",
		"twilight",
		"harry potter",
	};
	int i, j;
	int index;

	puts("<< ���� �� >>");
	for (i = 0; i < MAX; i++)
	{
		puts(books[i]);
	}

	for (i = 0; i < MAX - 1; i++)
	{
		index = i;
		for (j = i + 1; j < MAX; j++)
		{
			if (strcmp(books[index], books[j]) > 0)
				index = j;
		}
		if (index != i)
			swap_string(books[i], books[index], BUF_SZ);
	}

	puts("<< ���� �� >>");
	for (i = 0; i < MAX; i++)
	{
		puts(books[i]);
	}

	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[BUF_SZ] = "";

	if (lhs_len >= size || rhs_len >= size)
		return 0;
	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	return 1;
}