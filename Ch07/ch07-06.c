/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 07-06
   ��¥ : 2025.09.15
*/

#include <stdio.h>

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);
	arr[5] = 100;

	return 0;

}