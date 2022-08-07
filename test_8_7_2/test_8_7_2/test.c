#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>

//int i = 0;//i是全局变量，不初始化默认是0
//int main()
//{
//	i--;
//	//sizeof整个操作符，算出的结果的类型是unsigned int
//	if (i > sizeof(i))//因此i会算术转换，-1的补码是32个1，转换成无符号的，说明全都是有效数字，即是一个很大的数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa 的前5项之和，其中a是一个数字
//例如：2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int cet = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		cet = cet * 10 + a;
//		sum = sum + cet;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//int main()
//{
//	//由a组成前n项之和 - 不考虑溢出
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//算出一项
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("num = %d", sum);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整形一维数组

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *pa + i);//这个是error，因为*pa代表已经解引用了，所以代表元素，而pa代表地址，未解引用
//		printf("%d ", *(pa + i));
//	}
//
//
//	return 0;
//}

//取出0~100000之间所有的水仙花数并输出
//水仙花数是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3，则153是一个水仙花数

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 计算i的位数n
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. 计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);//pow是用来求次方，前面是几，后面是指数，即n次
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;// *(p+3) = *(p+3) + 3
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//字符串逆序
//写一个函数，可以逆序一个字符串的内容
#include <string.h>
#include <assert.h>
//void reverse(char* pa, int left, int right)
//{
//	assert(pa);
//	while (left < right)
//	{
//		char tmp = *(pa + left);
//		*(pa + left) = *(pa + right);
//		*(pa + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[] = "abcdefg";//gfedcba
//	//char* arr = "abcdef"不行，因为这是常量字符串，不能改变
//	int sz = strlen(a);
//	reverse(a, 0, sz - 1);
//	printf("%s", a);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//星号
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//星号
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）；

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n;
//	
//	while (n > 1)
//	{
//		int ret = 0;
//		ret = n / 2;
//		sum = sum + ret;
//		if (n % 2 == 1)
//		{
//			n++;
//		}
//		n = n / 2;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//调整奇数偶数顺序
//使奇数全部位于偶数前面
//输入一个整数数组，来实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分
//所有偶数位于数组的后半部分

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//整形提升，a和b
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100 - c
//	//截断 - 00101100
//
//	printf("%d %d", a + b, c);//300 44
//	//这里又要整形提升
//	//a+b = 00000000000000000000000100101100 - 300
//	//c   = 00101100
//	//c   = 00000000000000000000000000101100 - 44
//	return 0;
//}

//打印杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//数学 -> 5

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1))
							)
						{
							if (a * b * c * d * e == 120)
							{
								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}

	return 0;
}
