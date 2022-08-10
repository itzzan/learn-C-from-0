#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. 计数器的版本
//2. 递归的版本
//3. 指针-指针的版本
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a', 'b', 'c' };
//
//	int len = my_strlen(arr);
//	
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char* str = "***********************";
//
//	//char arr[5] = "####";
//	//arr = "hello";//error
//	//char* p = "hello";//放的是h的地址
//	//strcpy(arr, "hello");//string copy
//	//char arr2[] = { 'a', 'b', 'c' };
//	char* p = "hello world";
//	
//	strcpy(str, p);
//	
//	printf("%s\n", str);
//	return 0;
//}

//strcat - 字符串追加

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1. 找目标字符串的\0
	while (*dest != '\0')
	{
		dest++;
	}
	//2. 追加源字符串，包含\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回的是目标空间的起始地址
}

int main()
{
	char arr1[20] = "hello ";//world - hello world
	char arr2[] = "world";
	
	//my_strcat(arr1, arr2);//字符串追加 - 字符串连接

	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
