#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	test(&a, &b);
//
//	return 0;
//}

//ȫ�ֱ����;ֲ�������������ֵ
//ֱ��int a;int b;
//int a = 0;
//int b = 0;
//
//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//
//	test(&a, &b);
//
//	return 0;
//}

//���ű��ʽ���ö��Ÿ����ģ�����������㣬��ֻȡ���һ��
//exec((v1, v2), (v3, v4), v5, v6);

//��ӡ�˷��ھ���

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//����
//	print_table(n);
//	//�����������Ƿǳ��ؼ��ģ�������������ֺ����Ĺ���
//
//	return 0;
//}


//�ַ������򣨵ݹ�ʵ�֣�
//��дreverse_string(char* string)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ
//Ҫ�󣺲���ʹ��C�������ַ�����������
//���磺char arr[] = "abcdef" ��� "fedcba"

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	int left = str[0];
	int right = str[my_strlen(str) - 1];

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);//fedcba

	return 0;
}

