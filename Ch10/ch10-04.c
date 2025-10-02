/* 학번 : 202511205
   이름 : 구가인
   프로그램 명 : c programming 예제 10-04
   날짜 : 2025.10.02
*/

#include <stdio.h>
#include <string.h>

struct contact			// 연락처 구조체
{
	char name[20];		// 이름
	char phone[20];		// 전화번호(01012345678 형식의 문자열로 저장)
	int ringtone;		// 벨 소리 (0~9 선택)
};