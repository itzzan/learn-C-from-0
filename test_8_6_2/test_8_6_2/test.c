#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int n = 9;//4byte
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	float f = 5.5f;
//	//101.1 - 二进制
//	//1.011*2^2
//	//s=0; m=1.011; E=2
//	//s=0; m=011; E=2+127
//	// s+E+m
//	//0 10000001 01100000000000000000000 - 2进制
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//
//
//	return 0;
//}

int main()
{
	int n = 9;//4byte
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}

