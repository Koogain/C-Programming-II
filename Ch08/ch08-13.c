/* �й� : 202511205
   �̸� : ������
   ���α׷� �� : c programming ���� 08-13
   ��¥ : 2025.09.23
*/

#include <stdio.h>
void swap(int* x, int* y);

int main(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);	// �����Ϳ� ���� ����
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int* x, int* y)	// x, y�� ������ �ּ��̴�.
{
	int temp = *x;		// x�� ����Ű�� ������ ���� temp�� �����Ѵ�.
	*x = *y;			// y�� ����Ű�� ������ ���� x�� ����Ű�� ������ �����Ѵ�.
	*y = temp;			// temp�� y�� ����Ű�� ������ �����Ѵ�.
}