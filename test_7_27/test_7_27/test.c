#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//f(x) = 2 * x + 1;

//Debug可以调试的版本
//release测试的版本，不可以调试
//size_t 就是unsigned int

//int main()
//{
//	//指针是地址，而字符数组也是地址，所以就不用加指针
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印arr1这个字符串，用%s打印。%s - 以字符串的格式来打印
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//写一个函数可以找到两个整数的最大值

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d %d", &a, &b);
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//交换两个整型的数

//函数返回类型的地方写成void，表示这个函数不反悔任何值，也不需要返回
//写出问题了
// 这个被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
// 改变形参，其实不能改变实参
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换两个整型的变量的值
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);//传值调用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节的空间
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//写一个函数 - 交换两个整型的变量的值
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);//传址调用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//下面这种不行，还是传不进去，地址一直不变，那只能用地址来做，用指针
//上面的get_max只是求出max，不会改变a和b的值
//而下面的Swap，传参过去后，还要交换，也就是我们在这个过程中会把外边的x，y交换，所以我们需要把外部的与内部的建立联系
//所以需要传入地址
//return只能返回一个值，不能返回多个值

//int Swap(int pa, int pb)
//{
//	int z = 0;
//	z = pa;
//	pa = pb;
//	pb = z;
//	return pa, pb;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//写一个函数 - 交换两个整型的变量的值
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



