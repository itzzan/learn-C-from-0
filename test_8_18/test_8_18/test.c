#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字
// 1 2 3 4 5 6 1 2 3 4

//void Find(int arr[], int sz, int* px, int* py)
//{
//	//1. 要把所有数字异或
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. 计算ret的哪一位为1
//	//ret = 3
//	//011
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//把从低位向高的第pos位为1的放在一个组，为0的放在另外一个组
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*px = num1;
//	*py = num2;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	//101
//	//110
//	//011  3
//
//	//1^2^3^4^5^6^1^2^3^4 = 5^6 != 0
//
//	// 1 3 1 3 5
//	// 2 4 2 4 6
//	// 1. 分组
//	// 2. 分组要点：5和6必须在不同的组
//	// 
//	//找出这两个只出现一次的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	//int diff[2];
//
//	Find(arr, sz, &x, &y);
//
//	printf("%d %d\n", x, y);
//	return 0;
//}


//写一个宏，可以将整数的二进制的奇数位和偶数位交换

//#define SWAP(N) ((N & 0xaaaaaaaa)>>1) + ((N & 0x55555555)<<1)
//
//int main()
//{
//	//10
//	//00000000000000000000000000001010
//	//偶数位右移一位
//	//奇数位左移一位
//	int num = 10;
//	int ret = SWAP(num);
//	//int ret = ((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555)<<1);
//	printf("%d\n", ret);
//
//	return 0;
//}

#include <stddef.h>
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
struct A
{
	int a;
	short b;
	int c;
	char d;
};

#define OFFSETOF(struct_name, member_name) (int)&((struct_name*)0x400)->member_name - 0x400\
													//这里也可以直接写0，后面就不需要减了，因为0这里不开辟空间

int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));

	return 0;
}