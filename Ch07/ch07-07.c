/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 07-07
   ��¥ : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };
	int i;

	// y = x;

	for (i = 0; i < 5; i++)
		printf("%d ", y[i]);
	printf("\n");

	return 0;

}