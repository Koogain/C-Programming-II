/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 07-04
   ��¥ : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int amount[5] = { 1, 1, 5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d ", amount[i]);
	printf("\n");

	printf("price =");
	for (i = 0; i < 5; i++)
		printf("%d ", price[i]);
	printf("\n");

	return 0;

}