#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//typedef ����������

//typedef unsigned int u_int;
////���� - С��
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - ��̬��
//1. static���ξֲ�����
//2. static����ȫ�ֱ���
//3. static���κ���

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern �����ⲿ���ŵģ���������Ҫָ����ֵ
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//��������(x��y���Բ�д)
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define ��һ��Ԥ����ָ��
//1.define�������

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define �����
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}


//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n", &a);// %pר��������ӡ��ַ
//
//	int * pa = &a;// pa������ŵ�ַ����C�����н�pa��ָ�����
//	// * ˵��pa��ָ�����
//	//int ˵��paָ��Ķ�����int���͵�
//
//	char ch = "w";
//	char * pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//
//
//	return 0;
//}

//ָ�� ���� ��ַ

//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//
//	*pa = 20;// * �����ò�����*pa����ͨ��pa��ߵĵ�ַ�ҵ�a,�����Ļ�Ҳ�ͼ�ӵĸı�a��ֵ
//
//	printf("%d\n", *pa);
//
//	
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}

//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

//struct Stu
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = {"����", 18, 85.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("%s %d %lf\n", s.name, s.age, s.score);// �ṹ�����.��Ա���� 
//
//	struct Stu * ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//��ͷ - �ṹ��ָ��->��Ա������
//	//��ӡ�����Ⱦ�%f , ��ӡ˫���Ⱦ�%lf�� ������ĸL����������1
//	return 0;
//}

//void test()
//{
//	int b = 0;
//}
//int main()
//{
//	int a = 10;
//	return 0;
//}

//int num = 10;
//int main()
//{
//	int num = 1;
//	//�ֲ���������
//	printf("num = %d\n", num);
//	
//	return 0;
//}

int main()
{
	char arr[] = { 'b', 'i', 't' };
	printf("%d\n", strlen(arr));
	return 0;
}
