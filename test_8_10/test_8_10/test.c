#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int(*(*p(int, int))(int);
//int(*  )(int);

//���Ͼ���
//��һ�����־��󣬾���ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
//	int x = 3;//��
//	int y = 3;//��
//	//&x,&y
//	//1. �������
//	//2. ����ֵ
//	//����ҵ�����1���Ҳ�������0
//	int ret = find_num(arr, &x, &y, k);
//
//	if (ret == 1)
//	{
//		printf("%d %d\n", x, y);
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	//O(1)
//	//N - 3 5 8
//	//N - ���ҵĴ�������������N�Σ���2N����3N����Щ�ͽ���O(N)
//	//N*N  N*(N-1) -- O(N^2)
//	//����һ�����֣�����˵�ң�7
//	//�����ķ���������Ҫ��
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

//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;
//		//�������n-1���ַ�ǰ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//��tmp��ֵ�ŵ����
//		*(str + len - 1) = tmp;
//	}
//
//}

#include <assert.h>
//������ת��
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
//	reverse(str, str + k - 1);//��
//	reverse(str + k, str + len - 1);//��
//	reverse(str, str + len - 1);//����
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

//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//���磺����s1 = AABCD��s2 = BCDAA�� ����1
//����s1 = abcd��s2 = ABCD�� ����0

//int is_string_left_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//	for (i = 0; i < len; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str1;
//		//�������n-1���ַ�ǰ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//��tmp��ֵ�ŵ����
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
	//���Ȳ���ȣ��϶�������ת�õ���
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	//1. str1�ַ������׷��һ��str1
	//AABCDAABCD

	strcat(str1, str1);
	//strncat(str1, str1, len);

	//2. �ж�str2�Ƿ�Ϊstr1���Ӵ�
	char* ret = strstr(str1, str2);//�����ж�һ���ַ����ǲ�����һ���ַ������Ӵ�
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