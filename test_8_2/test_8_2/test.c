#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符
//	int *pa = &a;//pa用来存放内存地址的 - pa就是一个指针变量
//	*pa = 20;// * - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	
//
//	return 0;
//}


//指针变量不看类型，大小要么为4要么为8，看32位还是64位
//void test1(int arr[])
//{
//	//首元素的地址传过来，地址就应该放在指针变量里面去
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	//指针 - 首元素的地址
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if (a != b)
//	//if (a >= b)
//	if (a <= b)
//	{
//
//	}
//
//	return 0;
//}
//一个等号是赋值，两个等号是判断相等


//比较两个字符串相等，不能使用 == 
//要用strcmp


//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a && b)
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//
//	return 0;
//}

//int main()
//{
//	//当a变成1时
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//
//	return 0;
//}

//int main()
//{
//	//当a变成1时
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//变成或||
//	//i = a++ && ++b && d++;
//	
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//
//	return 0;
//}

//int main()
//{
//	//当a变成1时
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//变成或||
//	//i = a++ && ++b && d++;
//
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//{
//	//	b = 1;
//	//}
//	//else
//	//{
//	//	b = -1;
//	//}
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式要从左向右依此计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	printf("%d\n", arr[4]);// [] - 下标引用操作符
//	//3+5;
//	return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b); //  () - 函数调用操作符
//	test();
//	printf("%d\n", ret);
//	return 0;
//}


//结构成员访问操作符
//.    结构体变量名.成员名
//->   结构体指针->成员名

//结构体（自定义类型）
//
// int float char short double long
//
//书；书名，书号，定价
//人：名字，年龄，性别
//

//struck是固定的语法结构
//注意后面还有分号；
//定义创建了一个自定义的类型
//struct Book
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//
//
//int main()
//{
//	//int num = 10;
//	//结构体变量名.成员名
//	struct Book b = {"C语言", "C20220509", 55};//初始化
//	struct Book * pb = &b;
//
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//
//
//	//printf("书名：%s\n", (*pb).name);
//	//printf("书号：%s\n", (*pb).id);
//	//printf("定价：%d\n", (*pb).price);
//
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("定价：%d\n", b.price);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//
//	return 0;
//}

//int main()
//{
//	//如果是unsigned char，那么就说明无符号，那么高位都补0
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a 只放了8个bit位，因为是1个字节,最高位是符号位
//	
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	
//	//00000000000000000000000000000011 - 变成int类型，4字节，32位，高位提升
//	//00000000000000000000000001111111 - 按照符号位来提升，符号位为0就全为0，符号为1，就高位补充1
//	//00000000000000000000000010000010
//	//又要剪断，因为c是char类型，只能放8位
//	// c - 10000010
//	// 
//	//发现a和b都是char类型，都没有达到一个int的大小
//	//这里就会发生整形提升
//	//整形提升是按照变量的数据类型的符号位来提升的
//	//
//
//	//因为要打印整型，所以又要整形提升
//	printf("%d\n", c);//-126
//	//11111111111111111111111110000010//补码
//	//内存放补码，所以还要转换成原码
//	//因为打印出来给我们看的是原码，而内存里面是补码
//	//11111111111111111111111110000001//反码
//	//10000000000000000000000001111110//原码
//	//这个转换下就是c的值
//
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	//c
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	//+c和-c是参与运算，就要整形提升
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//4 gcc是4，VS是1，以gcc为准
//	return 0;
//}

//只有当自身的大小不足int类型的大小（4个字节）才需要进行整形提升
// 比int大的不需要整形提升
//而需要整形提升的只有char类型和short类型，因为char类型是1个字节，short类型是2个字节
//%u就是打印一个无符号数
//%d是打印有符号整数

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a + b;//值属性，类型属性int
//
//	return 0;
//}
//
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = a + b * 7;//优先级决定计算顺序
//	int c = a + b + 7;//优先级一样，就不起作用，结合性决定了顺序
//
//
//	return 0;
//}
//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
////
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);
//
//	return 0;
//}

//VS - 12  全部i算完，再相加
//gcc - 10 先算前两个，然后相加后，再算第三个

//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%d", strlen(b));
//
//	return 0;
//}


//设计一个数组
//实现函数init() 初始化数组全为0
//实现printf() 打印数组的每个元素
//实现reverse() 函数完成数组元素的逆置

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
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
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	//int arr3[5] = { 0 };
	//数组名是数组首元素的地址 - 0x0012ff44
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("%s", arr1);
	printf("%s", arr2);


	return 0;
}