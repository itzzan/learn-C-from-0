#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		
//	}
//}
//
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//	
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//
//
//	return 0;
//}

//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д���
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ - ����ָ��
//
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ������� 
//
//	printf("%d\n", a);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr��ָ�������ָ�룬��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//
//	//��������(ָ��,���Ҫ������)(������������)
//	//pf����һ������ָ�����
//	int(*pf)(int, int) = &Add��
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	return 0;
//}

//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void(*pt)(char*) = &test;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int(*pf)(int, int) = &Add;
//
//	int(*pf)(int, int) = Add;//Add == pf
//	//int ret = (*pf)(3, 5);
//
//	//int ret = pf(3, 5);
//	//int ret = Add(3, 5);
//	//int ret = *pf(3, 5);//error
//
//	printf("%d\n", ret);
//	
//	return 0;
//}


//(*(void (*)())0)();
//(*(����ָ��)0)();
//��0ǿ��ת��Ϊ����ָ������
//�ٽ����ã���������

//int main()
//{
//	(*(void (*)())0)();
//
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת�� - ������Ϊһ�������ĵ�ַ
//	//3. *(void(*)())0 - ��0��ַ���н����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//����������
//	//��C�����ȱ�ݡ�
//
//	//(*(void (*)())0x0012ff40)();
//
//
//
//	return 0;
//}

//1. 
//void (*signal(int, void(*)(int)))(int);
//typedef - �����ͽ����ض��壨��������

//2. 
//typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
////typedef unsigned int uint;
//
////void(*)(int) signal(int, void(*)(int));//������д�﷨������(int)���ܷ�����
//pfun_t signal(int, pfun_t);

//1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ��������������int���ͣ��ڶ��������������Ǻ���ָ������
// �ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��һ������Ϊint����������Ϊvoid�ĺ���
//signal��һ������������


//����ָ������ - ��ź���ָ�������
// 
//����ָ�� - int*
//����ָ������� - int* arr[5]

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	
//	int(*pfArr[2])(int, int) = { Add, Sub };//pfArr - ����ָ������ - ���ͬ���͵ĺ���ָ��
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void meun()
//{
//	printf("**********************\n");
//	printf("****1.add    2.sub****\n");
//	printf("****3.mul    4,div****\n");
//	printf("****    0.exit   *****\n");
//	printf("**********************\n");
//}
//int main()
//{
//	int input = 0;
//	//������ - �������ͱ����� �ӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//	do
//	{
//		meun();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void meun()
//{
//	printf("**********************\n");
//	printf("****1.add    2.sub****\n");
//	printf("****3.mul    4,div****\n");
//	printf("****    0.exit   *****\n");
//	printf("**********************\n");
//}
//int main()
//{
//	int input = 0;
//	//������ - �������ͱ����� �ӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//	do
//	{
//		meun();
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };//�������ͺͲ���������ͬ���ܷ���һ������ָ����������
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - ��C��ָ�롷
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("���������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int arr[10];
//	//����Ԫ������ - int
//	//arr��������� - int[10]
//	return 0;
//}

//�ص�����


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void meun()
{
	printf("**********************\n");
	printf("****1.add    2.sub****\n");
	printf("****3.mul    4,div****\n");
	printf("****    0.exit   *****\n");
	printf("**********************\n");
}

int Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("���������������:>");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input = 0;
	//������ - �������ͱ����� �ӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a>b
	do
	{
		meun();

		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}