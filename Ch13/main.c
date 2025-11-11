#include <stdio.h>
#include "point.h"

// 명령행 인자

int main(int argc, char * argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");

	int a[3] = { 0 };

	if (argc < 3)
	{
		int a1 = atoi(argv[1]);
		int a2 = atoi(argv[2]);
		int a3 = atoi(argv[3]);
	}
	if (strcmp(argv[1], "1") == 0)
	{

	}
	printf("hello, i love you!!\n");

}