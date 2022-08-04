#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//预防发生错误
//通过编码的技巧、减少错误

//模拟实现strcpy
//strcpy - 字符串拷贝(所有字符都拷贝，包括\0)

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	//\0还要放进去
//	*dest = *src;
//}

#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//assert(src != NULL);//断言 - 就是判断条件，为假就报错，为真什么事都没有
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, const char* src)
//{
//	//assert(src != NULL);//断言 - 就是判断条件，为假就报错，为真什么事都没有
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//}
//
//
//int main()
//{
//	
//	char arr1[20] = "XXXXXXXX";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);//1. 目标空间的起始地址。2. 源空间的起始地址
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	//1.
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;*/
//
//	//2.
//	//const 修饰变量，这个变量就被称为常变量。不能被修改，但是本质上还是变量
//	const int num = 10;
//	//num = 20  error
//
//	//const int* p = &num;
//	//int n = 100;
//	////const 修饰指针变量的时候
//	//  const 跟int无关，跟*有关，在其左或右
// 	////const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	////		但是指针变量本身是可以修改的
//	////*p = 20;//err
//	//p = &n;//ok
//
//	int* const p = &num;
//	int n = 100;
//	//const 修饰指针变量的时候
//	//const 如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
//	//		但是指针指向的内容是可以修改的
//	*p = 20;//ok
//	p = &n;//err
//
//
//
//	printf("%d\n", num);
//	printf("%p\n", p);
//
//	return 0;
//}

//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不被修改

//strcpy这个库函数其实返回的是目标空间的起始地址
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言 - 就是判断条件，为假就报错，为真什么事都没有
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//
//int main()
//{
//	
//	char arr1[20] = "XXXXXXXX";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);//1. 目标空间的起始地址。2. 源空间的起始地址
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//
//	return 0;
//}

//strlen - 求字符串长度
//模拟实现my_strlen
//1.const
//2.assert

//健壮性
//鲁棒性

//size_t - unsigned int

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "asdasda";
//	printf("%zd\n", my_strlen(arr));
//
//	return 0;
//}



size_t my_strlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//声明外部符号
extern size_t my_strlen(const char* str);

int main()
{
	char arr[] = "asdasda";
	printf("%d\n", my_strlen(arr));

	return 0;
}
//要不这个符号就不存在
//要不这个符号写错了