#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//b4 b5 b6��ȫ�ֱ���
//
//int main()
//{
//	//b1 b2 b3 �Ǿֲ�����
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//
//
//	return 0;
//}

//�����ṹ�����ͣ�û���֣�
//ֻ����һ��
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
////�ڴ���������
////�ṹ���ڴ����
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


//Ĭ�϶�����Ϊ8

//��Ĭ�϶�������Ϊ2
//#pragma pack(2)
//struct S
//{
//	char c1;//0
//	int i;//
//	char c2;//
//	
//};
//#pragma pack()

//һ�㲻��������
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

//�Ա� - 3
// 00 ��
// 01 Ů
// 10 ����
// 11

//struct A 
//{
//	//4���ֽ� - 32λbit
//	int _a : 2;//_a ��Առ2��bitλ
//	int _b : 5;//_b ��Առ5��bitλ
//	int _c : 10;//_c ��Առ10��bitλ
//	//15
//	//4���ֽ� - 32λbit
//	int _d : 30;//_d ��Առ30��bitλ��ֱ���ú����32
//	//���32�����ܳ�
//};
//16λ - int - 2byte - 16bit
//32λ - int - 4byte - 32bit
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

//����ö������
//enum Color
//{
//	RED=5,//5�����治��ֵĬ�ϵ���1
//	GREEN=8,//6
//	BLUE//7
//};
//
//int main()
//{
//	//cpp���﷨�������ϸ�
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
//		printf("��ѡ��:>");
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
//	//����һ��ռ䣬��i��cҲ��ģ�c�ģ�iҲ���
//	//������ͬһʱ���ڣ�ֻ����һ��
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
//		return 1;//С��
//	}
//	else
//	{
//		return 0;//���
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
//	//����1����С��
//	//����0���Ǵ��
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
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

