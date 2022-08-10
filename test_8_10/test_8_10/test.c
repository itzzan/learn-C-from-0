#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int(*(*p(int, int))(int);
//int(*  )(int);

//杨氏矩阵
//有一个数字矩阵，矩阵每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求；时间复杂度小于O(N);

//1 2 3 
//2 3 4 
//4 5 6 

//1 2 3
//4 5 6
//7 8 9

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	int i = 0;
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	int i = 0;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;//行
//	int y = 3;//列
//	//&x,&y
//	//1. 传入参数
//	//2. 带回值
//	//如果找到返回1，找不到返回0
//	int ret = find_num(arr, &x, &y, k);
//
//	if (ret == 1)
//	{
//		printf("%d %d\n", x, y);
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//
//	//O(1)
//	//N - 3 5 8
//	//N - 查找的次数最坏的情况下是N次，或2N，或3N，这些就叫做O(N)
//	//N*N  N*(N-1) -- O(N^2)
//	//查找一个数字，比如说找：7
//	//遍历的方法不满足要求
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		if (arr[i][j] == 7)
//	//		{
//	//			
//	//		}
//	//	}
//	//}
//
//	return 0;
//}

//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;
//		//将后面的n-1个字符前移
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//将tmp的值放到最后
//		*(str + len - 1) = tmp;
//	}
//
//}

#include <assert.h>
//三步翻转法
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);//左
//	reverse(str + k, str + len - 1);//右
//	reverse(str, str + len - 1);//整体
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 1;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//例如：给定s1 = AABCD和s2 = BCDAA， 返回1
//给定s1 = abcd和s2 = ABCD， 返回0

//int is_string_left_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//	for (i = 0; i < len; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str1;
//		//将后面的n-1个字符前移
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//将tmp的值放到最后
//		*(str1 + len - 1) = tmp;
//		
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

int is_string_left_rotate(char* str1, char* str2)
{
	//长度不相等，肯定不是旋转得到的
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	//1. str1字符串后边追加一个str1
	//AABCDAABCD

	strcat(str1, str1);
	//strncat(str1, str1, len);

	//2. 判断str2是否为str1的子串
	char* ret = strstr(str1, str2);//用来判断一个字符串是不是另一个字符串的子串
	//AABCDAABCD   BCD

	return ret != NULL;
	//if (ret == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return 1;
	//}
}


//ABCDA
//BCDAA
//CDAAB
//DAABC
//AABCD
//
//AABCDAABCD

int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_left_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}

//
//int main()
//{
//	char arr[20] = "hello";
//	//strcat(arr, "bit");
//
//	//strcat(arr, arr);
//	strncat(arr, arr, 5);
//
//	printf("%s\n", arr);
//	return 0;
//
//}