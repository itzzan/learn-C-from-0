#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//typedef 类型重命名

//typedef unsigned int u_int;
////张三 - 小三
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static - 静态的
//1. static修饰局部变量
//2. static修饰全局变量
//3. static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern 声明外部符号的，声明不需要指定的值
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明函数(x，y可以不写)
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define 是一个预处理指令
//1.define定义符号

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define 定义宏
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}


//int main()
//{
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n", &a);// %p专门用来打印地址
//
//	int * pa = &a;// pa用来存放地址，在C语言中叫pa是指针变量
//	// * 说明pa是指针变量
//	//int 说明pa指向的对象是int类型的
//
//	char ch = "w";
//	char * pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//
//
//	return 0;
//}

//指针 就是 地址

//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//
//	*pa = 20;// * 解引用操作，*pa就是通过pa里边的地址找到a,这样的话也就间接的改变a的值
//
//	printf("%d\n", *pa);
//
//	
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}

//结构体可以让C语言创建新的类型出来

//创建一个学生

//struct Stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = {"张三", 18, 85.5};//结构体的创建和初始化
//	printf("%s %d %lf\n", s.name, s.age, s.score);// 结构体变量.成员变量 
//
//	struct Stu * ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//箭头 - 结构体指针->成员变量名
//	//打印单精度就%f , 打印双精度就%lf， 这是字母L，不是数字1
//	return 0;
//}

//void test()
//{
//	int b = 0;
//}
//int main()
//{
//	int a = 10;
//	return 0;
//}

//int num = 10;
//int main()
//{
//	int num = 1;
//	//局部变量优先
//	printf("num = %d\n", num);
//	
//	return 0;
//}

int main()
{
	char arr[] = { 'b', 'i', 't' };
	printf("%d\n", strlen(arr));
	return 0;
}
