/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 08-11
   ��¥ : 2025.09.23
*/

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };		// ������ �迭
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);				//arr[i]�� �������̴�.
	}
	printf("\n");

	return 0;
}