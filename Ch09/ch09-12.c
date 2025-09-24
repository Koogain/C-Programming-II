#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char books[5][30] =
	{
		"wonder",
		"me before you",
		"the hnger games",
		"twilight",
		"harry potter",
	};
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("책 제목: % s\n", books[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))
			books[i][0] = toupper(books[i][0]);
	}

	puts("<< 변경 후 >>");
	for (i = 0; i < 5; i++)
	{
		printf("책 제목: % s\n", books[i]);
	}

	return 0;
}