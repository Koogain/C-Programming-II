/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 07-15
   ��¥ : 2025.09.15
*/

#include <stdio.h>
#define SIZE 7
void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	printf_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];			// �迭�� ���Ҹ� �����Ѵ�.
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}