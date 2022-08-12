#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//b4 b5 b6是全局变量
//
//int main()
//{
//	//b1 b2 b3 是局部变量
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//
//
//	return 0;
//}

//匿名结构体类型（没名字）
//只能用一次
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}*ps;
//
//int main()
//{
//	ps = &s;//error
//	
//	return 0;
//}

//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//struct N
//{
//	int d;//4
//	struct N n;
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//
//int main()
//{
//	struct N sn;
//
//	return 0;
//}

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//
//	return 0;
//}


//struct S
//{
//	char c;
//	int i;
//}s1, s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	//struct S s3 = {'x', 20};
//	struct B sb = { 3.14, {'x', 20}, 's'};
//	//.
//	//->
//
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}

//struct S
//{
//	int i;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int i;
//	double d;//8
//};
//
//struct S4
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S5
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S6
//{
//	char c1;
//	struct S5 s5;
//	double d;
//};
//
////内存对齐的问题
////结构体内存对齐
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s5));
//	struct S6 s6 = { 0 };
//	printf("%d\n", sizeof(s6));
//
//	return 0;
//}


//默认对齐数为8

//把默认对齐数改为2
//#pragma pack(2)
//struct S
//{
//	char c1;//0
//	int i;//
//	char c2;//
//	
//};
//#pragma pack()

//一般不设置奇数
//#pragma pack(1)
//struct S
//{
//	char c1;//0
//	int i;//
//	char c2;//
//
//};
//#pragma pack()
//
//int main()
//{
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//offsetof

#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, c2));//8
//
//	return 0;
//}

//
//47  32+15

//性别 - 3
// 00 男
// 01 女
// 10 保密
// 11

//struct A 
//{
//	//4个字节 - 32位bit
//	int _a : 2;//_a 成员占2个bit位
//	int _b : 5;//_b 成员占5个bit位
//	int _c : 10;//_c 成员占10个bit位
//	//15
//	//4个字节 - 32位bit
//	int _d : 30;//_d 成员占30个bit位，直接用后面的32
//	//最大32，不能超
//};
//16位 - int - 2byte - 16bit
//32位 - int - 4byte - 32bit
// 
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}

//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//#define RED 5
//#define GREEN 8
//#define BLUE 9

//声明枚举类型
//enum Color
//{
//	RED=5,//5，后面不赋值默认递增1
//	GREEN=8,//6
//	BLUE//7
//};
//
//int main()
//{
//	//cpp的语法检查更加严格
//	enum Color c = BLUE;
//	//RED = 6;//error
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//void menu()
//{
//	printf("**************************\n");
//	printf("*********1.add 2.sub******\n");
//	printf("*********3.mul 4.div******\n");
//	printf("***********0.exit*********\n");
//}
//
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			add(x, y);
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	
//	//int a = RED;
//	//int a = 5;
//
//
//	return 0;
//}


//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u = { 10 };
//	u.i = 1000;
//	u.c = 100;
//	//共用一块空间，改i，c也会改，c改，i也会改
//	//所以在同一时间内，只能用一个
//	//printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}


//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1就是小端
//	//返回0就是大端
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}

union Un
{
	//char a[5];//1  5
	//int i;//4
	//char c;//1
	short s[5];//2  10
	int a;//4
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	
	return 0;
}

