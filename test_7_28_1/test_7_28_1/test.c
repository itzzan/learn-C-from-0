#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//�ݹ飺�����Լ������Լ�

//���ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4

//void print(unsigned int n)//123
//{
//	if (n > 9)//����Ҫ<=9���ݹ���˳���
//	{
//		print(n / 10);//����Ҫ��ÿ�ε���һ�Σ��ݹ��Խ��Խ�ӽ���������
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//
//
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ��ȡ�

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

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//return 1 + my_strlen(++str);//��ȱ�ݣ���Ϊ���������Ǳ���֮���ֵ����ı�str
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	//['b']['i']['t']['\0']
//	//
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//��n�Ľ׳�
//1*2*3*...*n

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//������ѭ����һ�ֵ����ķ�������ʽ��
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//��һЩ���ܣ�����ʹ�õ����ķ�ʽ��ʵ�֣�Ҳ�����õݹ���ʵ��

//���n��쳲����������������������

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = Fib(n);
//	printf("%d\n", cnt);
//	return 0;
//}

//int count = 0;
////�ݹ������⣬��Ч��̫��
//int Fib(int n)
//{
//	if (n == 3)//�����3��쳲��������ļ��������
//		count++;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = Fib(n);
//	printf("%d\n", cnt);
//	printf("count = %d\n", count);
//	return 0;
//}


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)//n = 1��2��ʱ�򣬾�ֱ�����c�����Ը�c��ֵ��ʼ��Ϊ1
	{
		c = a + b;
		a = b;
		b = c;
		n--;             
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int cnt = Fib(n);
	printf("%d\n", cnt);

	return 0;
}