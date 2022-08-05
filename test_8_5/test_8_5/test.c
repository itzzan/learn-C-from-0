#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//计算参数n的二进制补码中有几个1
//15 - 00001111
//15%2
//int NumberOf1(int n)
//{
//	int m = 1;
//	int count = 0;
//	int x = 0;
//	for (x = 0; x < 32; x++)
//	{
//		if (m & n)
//		{
//			count++;
//		}
//		n >>= 1;
//	}
//	return count;
//}

//int NumberOf1(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)//n为负数就出问题了，改unsigned int是可以的，int就不行
//	{
//		if (n % 2)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//写一个代码判断一个数组是不是2的n次方
//2的n次方的数组，其中只有一个1，二进制
//k & (k-1) == 0
//
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		if ((n & (n - 1)) == 0)
//		{
//			count = 0;
//		}
//		else
//		{
//			count = 1;
//			break;
//		}
//		n = n & (n - 1);
//	}
//	return count;
//}
//
////统计二进制的几个1
//int main()
//{
//	int n = 12;
//	//100000000000000000000000000000000001
//	//111111111111111111111111111111111110
//	//111111111111111111111111111111111111
//
//	int ret  = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求两个数二进制中不同的个数

//int judge(int a, int b)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & 1) != (b & 1))
//		{
//			count++;
//		}
//		a >>= 1;
//		b >>= 1;
//	}
//	return count;
//}

//int judge(int a, int b)
//{
//
//	int count = 0;
//	int c = a ^ b;//相同为0，相异为1
//	//统计以下c的二进制中有几个1，就说明a和b的二进制位中有几个不同
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = judge(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的二进制中的奇数位和偶数位
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;//a ^ b ^ b
//	a = a ^ b;//a = a ^ b ^ a = b
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}