#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����
// 1 2 3 4 5 6 1 2 3 4

//void Find(int arr[], int sz, int* px, int* py)
//{
//	//1. Ҫ�������������
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. ����ret����һλΪ1
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
//	//�Ѵӵ�λ��ߵĵ�posλΪ1�ķ���һ���飬Ϊ0�ķ�������һ����
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
//	// 1. ����
//	// 2. ����Ҫ�㣺5��6�����ڲ�ͬ����
//	// 
//	//�ҳ�������ֻ����һ�ε�����
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


//дһ���꣬���Խ������Ķ����Ƶ�����λ��ż��λ����

//#define SWAP(N) ((N & 0xaaaaaaaa)>>1) + ((N & 0x55555555)<<1)
//
//int main()
//{
//	//10
//	//00000000000000000000000000001010
//	//ż��λ����һλ
//	//����λ����һλ
//	int num = 10;
//	int ret = SWAP(num);
//	//int ret = ((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555)<<1);
//	printf("%d\n", ret);
//
//	return 0;
//}

#include <stddef.h>
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
struct A
{
	int a;
	short b;
	int c;
	char d;
};

#define OFFSETOF(struct_name, member_name) (int)&((struct_name*)0x400)->member_name - 0x400\
													//����Ҳ����ֱ��д0������Ͳ���Ҫ���ˣ���Ϊ0���ﲻ���ٿռ�

int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));

	return 0;
}