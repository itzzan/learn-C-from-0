#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//int main()
//{
//	int a = 10;//4���ֽ� - 
//	int * pa = &a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//
//	return 0;
//}
//
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//
//	return 0;
//}

//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж��char - 1���ֽڣ�int - 4���ֽڣ� double - 8���ֽ�
//2. ָ�����;�����,ָ����һ�������߶�Զ��������



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 A B C D E F
//	//11111111
//	//    8421
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;
//	//char�����ͽ����ý��ı���1���ֽ�
//	//int* pa = &a;
//	//*pa = 0;
//	//int���ͽ����øı���4���ֽ�
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//�±�Ϊi�ĵ�ַ
//	}
//
//	return 0;
//}
//char��һ��һ���ֽڷ���
//int��һ��һ��Ԫ�ط��ʣ���4���ֽڣ�

//
//int main()
//{
//	//�����p����һ��Ұָ��
//	int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ���
//
//
//
//	return 0;
//}

//int main()
//{
//	//Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�Ӷ���Ϊ��ָ��NULL
//	//int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C���Ա����ǲ���������Խ�����Ϊ��
//	int* p = NULL;
//	//*p = 10;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�������ǰ��
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//error
////	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

#include <string.h>

//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�
//ָ�� - ָ��

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	strlen() - ���ַ����ĳ��ȵ�
//	�ݹ�
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	// []��һ����������2��arr������������
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//
//	//arr[2] = *(arr+2)
//
//
//	//arr[2] <==> *(arr+2) <==> * (p + 2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//*(2 + arr) == 2[arr]
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa����һ������ָ�����
//	int** ppa = &pa;//paҲ�Ǳ�����&paȡ��pa���ڴ��е���ʼ��ַ
//	int*** pppa = &ppa;
//
//	return 0;
//}

//ָ������ - ������������
// 
//�ú���

//int main()
//{
//	int arr[10];//�������� - ������ε����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ��ŵ���ָ��
//	int* parr[5];//����ָ�������
//	char* pch[5];
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//�ṹ�ĳ�Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//
//}s1, s2;//s1��s2Ҳ�ǽṹ�����
////s1��s2��ȫ�ֱ���

//int main()
//{
//	//s�Ǿֲ�����
//	//��ʼ��
//	struct Stu s = { {'w', 20, 3.14}, "����", 30, "20200534"};//����
//	//.
//	//->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	/*struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);*/
//
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//�ṹ�ĳ�Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//
//int main()
//{
//	//s�Ǿֲ�����
//	//��ʼ��
//	struct Stu s = { {'w', 20, 3.14}, "����", 30, "20200534"};//����
//	//дһ��������ӡs������
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}
