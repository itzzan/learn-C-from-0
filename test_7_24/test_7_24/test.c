#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
// 
//}
//C99 ��׼�� ����һ������䳤����
//֧�����鴴����ʱ���ñ�����ָ����С�ģ�����������鲻�ܳ�ʼ��
//VS2022��VS2019��֧��C99�еı䳤����

//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };
//	//int arr[n];
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}

//MAX һ�㲻����Ѻ���������д��ȫ��д

//int MAX(int x, int y)
//{
//	if (x >= y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d %d", &x, &y);
//	max = MAX(x, y);
//	printf("%d\n", max);
//	return 0;
//}

//define 
//#define Ԥ����ָ��
//include
// #include Ԥ����ָ��
//

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));	
//	}
//}	

//continue ��������switch������

//#include <stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    ");
//
//    return 0;
//}


//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}

//C�����ǽṹ���ĳ����������

//˳��ṹ

//ѡ��ṹ

//ѭ���ṹ

//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//�����
//	//�ֺŸ����ľ���һ�����
//	return 0;
//}

//C��������α�ʾ��ͼ��㣿 - ��0�����棬0���Ǽ�

//if else Ĭ�Ͽ���һ��,Ҫ����ƶ��У���һ��Ҫ{}��������
//int main()
//{
//	
//	/*if (age >= 18)
//	{
//		printf("����");
//	}*/
//	
//	/*if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}*/
//	int age = 70;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//			printf("����\n");
//	else if (age >= 26 && age < 40)
//			printf("����\n");
//	else if (age >= 40 && age < 60)
//			printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//		
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}// ifû��{}��ִֻ��һ�����
//		
//
//	//else������������ifƥ��
//	return 0;


//������
//��������C/C++��̡�

//int test()
//{
//	if (1)
//		return 0;
//
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int num = 3;
//
//	//if (num = 5)
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (1 == a % 2)
//		printf("����");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

int main()
{
	//C++
	//c99֧������д
	//for (int i = 1; i <= 100; i++)
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)
		{
			printf("%d ", i);
		}
	}

	return 0;
}