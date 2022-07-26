#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟后关机，如果输入：爸爸，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "爸爸") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}


	return 0;
}