#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. �������İ汾
//2. �ݹ�İ汾
//3. ָ��-ָ��İ汾
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
//	//char* p = "hello";//�ŵ���h�ĵ�ַ
//	//strcpy(arr, "hello");//string copy
//	//char arr2[] = { 'a', 'b', 'c' };
//	char* p = "hello world";
//	
//	strcpy(str, p);
//	
//	printf("%s\n", str);
//	return 0;
//}

//strcat - �ַ���׷��

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1. ��Ŀ���ַ�����\0
	while (*dest != '\0')
	{
		dest++;
	}
	//2. ׷��Դ�ַ���������\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//���ص���Ŀ��ռ����ʼ��ַ
}

int main()
{
	char arr1[20] = "hello ";//world - hello world
	char arr2[] = "world";
	
	//my_strcat(arr1, arr2);//�ַ���׷�� - �ַ�������

	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
