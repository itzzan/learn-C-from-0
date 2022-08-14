#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//动态内存开辟

//int main()
//{
//	//假设开辟10个整形的空间
//	//int arr[10];//栈区
//	//动态内存开辟的
//	//void* p = malloc(10 * sizeof(int));
//	//因为malloc的返回值是void*，在一些编译器下会出错，因此强转一下
//
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		//printf("malloc error\n");
//		//printf + strerror
//		perror("main");//main: xxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//回收空间
//	free(p);//p被回收了，但是里面还是存的是首地址，因此要给p重新置为NULL
//	p = NULL;//自己动手把p置为NULL
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//error
//
//	return 0;
//}

//int main()
//{
//
//	//int* p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	
//	//这里需要p指向的空间更大，需要20个int空间
//	//realloc调整
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//这里功能类似于malloc，就是直接在堆区开辟40个字节
//
//	return 0;
//}

//动态内存开辟常见的错误

//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(1000000000000000000);
//	//对malloc函数的返回值，做判断处理
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	
//
//	return 0;
//}

//2.对动态开辟空间越界访问
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//越界访问
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.使用free释放非动态开辟的空间
//int main()
//{
//	int arr[10] = { 0 };//栈区
//	int* p = arr;
//	//使用
//	
//	free(p);//使用free释放非动态开辟的空间
//	p = NULL;
//
//
//	return 0;
//}

//4.用free释放释放动态内存中的一部分
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5.对同一块动态开辟的空间，多次释放
//int main()
//{
//	int* p = (int*)malloc(100);
//	//使用
//	//释放
//	free(p);
//  p = NULL;//置成NULL后，再次释放不会发生任何事情
//	//再一次释放
//	free(p);
//
//
//	return 0;
//}

//6.动态开辟的空间忘记释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	//动态开辟的空间只有两种情况会销毁（回收）
//	//1.被我们主动释放free
//	//2.程序结束，而不是函数结束
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//	
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}


//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//? ok
//	//printf("hello world");//char* p = "hello world";传的是h的地址，而不是hello world
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改2
//void GetMemory(char** p) 
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


char* GetMemory(void) 
{
	char p[] = "hello world";
	return p;
}
void Test(void) 
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}