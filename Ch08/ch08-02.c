/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 08-02
   날짜 : 2025.09.23
*/

#include <stdio.h>

int main(void)
{
	// int *p1 = 0x12345678;		// 컴파일 에러
	int* p2 = (int*)0x12345678;		// 실행 에러가 발생한다.

	int a = 10;
	int *p3 = &a;				// a의 주소를 구해서 p를 초기화한다.
	int* p4 = 0;				//어떤 주소로 초기화할지 알 수 없으면 0으로 초기화한다.
	int* p5 = NULL;				// 0 대신 NULL을 사용할 수 있다.

	printf("p2 = %p\n", p2);
	printf("p2 = %p\n", p3);
	printf("p2 = %p\n", p4);
	printf("p2 = %p\n", p5);

	return 0;
}