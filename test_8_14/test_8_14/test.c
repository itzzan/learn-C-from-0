#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��̬�ڴ濪��

//int main()
//{
//	//���迪��10�����εĿռ�
//	//int arr[10];//ջ��
//	//��̬�ڴ濪�ٵ�
//	//void* p = malloc(10 * sizeof(int));
//	//��Ϊmalloc�ķ���ֵ��void*����һЩ�������»�������ǿתһ��
//
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		//printf("malloc error\n");
//		//printf + strerror
//		perror("main");//main: xxxx
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//���տռ�
//	free(p);//p�������ˣ��������滹�Ǵ�����׵�ַ�����Ҫ��p������ΪNULL
//	p = NULL;//�Լ����ְ�p��ΪNULL
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//error
//
//	return 0;
//}

//int main()
//{
//
//	//int* p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	
//	//������Ҫpָ��Ŀռ������Ҫ20��int�ռ�
//	//realloc����
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//���﹦��������malloc������ֱ���ڶ�������40���ֽ�
//
//	return 0;
//}

//��̬�ڴ濪�ٳ����Ĵ���

//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(1000000000000000000);
//	//��malloc�����ķ���ֵ�����жϴ���
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	
//
//	return 0;
//}

//2.�Զ�̬���ٿռ�Խ�����
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//Խ�����
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.ʹ��free�ͷŷǶ�̬���ٵĿռ�
//int main()
//{
//	int arr[10] = { 0 };//ջ��
//	int* p = arr;
//	//ʹ��
//	
//	free(p);//ʹ��free�ͷŷǶ�̬���ٵĿռ�
//	p = NULL;
//
//
//	return 0;
//}

//4.��free�ͷ��ͷŶ�̬�ڴ��е�һ����
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5.��ͬһ�鶯̬���ٵĿռ䣬����ͷ�
//int main()
//{
//	int* p = (int*)malloc(100);
//	//ʹ��
//	//�ͷ�
//	free(p);
//  p = NULL;//�ó�NULL���ٴ��ͷŲ��ᷢ���κ�����
//	//��һ���ͷ�
//	free(p);
//
//
//	return 0;
//}

//6.��̬���ٵĿռ������ͷ�
//void test()
//{
//	int* p = (int*)malloc(100);
//	//��̬���ٵĿռ�ֻ��������������٣����գ�
//	//1.�����������ͷ�free
//	//2.��������������Ǻ�������
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//	
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}


//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//? ok
//	//printf("hello world");//char* p = "hello world";������h�ĵ�ַ��������hello world
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��2
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


char* GetMemory(void) 
{
	char p[] = "hello world";
	return p;
}
void Test(void) 
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}