#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//int main()
//{
//	int a = 10;//4个字节 - 
//	int * pa = &a;//拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;
//
//
//	return 0;
//}
//
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//
//	return 0;
//}

//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大，char - 1个字节，int - 4个字节， double - 8个字节
//2. 指针类型决定了,指针走一步，能走多远（步长）



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 A B C D E F
//	//11111111
//	//    8421
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;
//	//char的类型解引用仅改变了1个字节
//	//int* pa = &a;
//	//*pa = 0;
//	//int类型解引用改变了4个字节
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//下标为i的地址
//	}
//
//	return 0;
//}
//char是一个一个字节访问
//int是一个一个元素访问（即4个字节）

//
//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	*p = 20;//非法访问内存了
//
//
//
//	return 0;
//}

//int main()
//{
//	//越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接定义为空指针NULL
//	//int* p = NULL;
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C语言本身是不会检测数组越界的行为的
//	int* p = NULL;
//	//*p = 10;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//error
////	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}

#include <string.h>

//计数器
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

//递归
//指针 - 指针

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	strlen() - 求字符串的长度的
//	递归
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	// []是一个操作符，2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//
//	//arr[2] = *(arr+2)
//
//
//	//arr[2] <==> *(arr+2) <==> * (p + 2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//*(2 + arr) == 2[arr]
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是一个二级指针变量
//	int** ppa = &pa;//pa也是变量，&pa取出pa在内存中的起始地址
//	int*** pppa = &ppa;
//
//	return 0;
//}

//指针数组 - 本质上是数组
// 
//好孩子

//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放的是指针
//	int* parr[5];//整形指针的数组
//	char* pch[5];
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//结构的成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//
//}s1, s2;//s1和s2也是结构体变量
////s1，s2是全局变量

//int main()
//{
//	//s是局部变量
//	//初始化
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "20200534"};//对象
//	//.
//	//->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	/*struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);*/
//
//
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//结构的成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//
//int main()
//{
//	//s是局部变量
//	//初始化
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "20200534"};//对象
//	//写一个函数打印s的内容
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}
