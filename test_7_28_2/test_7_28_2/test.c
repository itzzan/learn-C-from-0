#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	//0-9
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}


//编写程序数一下1-100的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int cet = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			cet++;
//		}
//		if (i / 10 == 9)
//		{
//			cet++;
//		}
//
//	}
//	printf("%d\n", cet);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5-....+1/99-1/100的值
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	double sum = 0.0;
//	double sub = 0.0;
//	for (x = 1; x <= 100; x += 2)
//	{
//		sum = sum + 1.0 / x;
//	}
//	for (y = 2; y <= 100; y += 2)
//	{
//		sub = sub - 1.0 / y;
//	}
//	printf("%lf\n", sum + sub);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中最大值
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//在频幕上输入99乘法表
//int main()
//{
//	int i = 1;//行
//	int j = 1;//列
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//函数数据应该追求高内聚低耦合，跟别人没什么关系，把自己做好
//函数参数不易过多
//设计函数时，尽量做到谁申请的资源就由谁来释放

void test()
{
	{
		int a = 10;
	}
	printf("%d", a);
}

int main()
{
	test();

	return 0;
}