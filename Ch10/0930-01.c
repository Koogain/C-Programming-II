#include <stdio.h>

/*
struct contact
{
	char name[50];
	char phone[15];
	char ringtone;
};

typedef struct contact Contact;
Contact kim = { 0 };
*/

/*
typedef struct contact
{
	char name[50];
	char phone[15];
	char ringtone;
} Contact;
*/

#include "contact.h"

Contact kim = { 0 };

int main()
{
	Contact lee = { "LEE", "010-1234-5678", 1 };

	Contact lee2 = { 0 };

	lee2 = lee;		// ��ü ����Ʈ�� �о� �״�� ������

	// lee2 = { "LEE2", "010-9876-5432", 2 }; error
	strcpy
}