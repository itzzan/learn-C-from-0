#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - ȡ��ַ������
//	int *pa = &a;//pa��������ڴ��ַ�� - pa����һ��ָ�����
//	*pa = 20;// * - �����ò����� - ��ӷ��ʲ�����
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	
//
//	return 0;
//}


//ָ������������ͣ���СҪôΪ4ҪôΪ8����32λ����64λ
//void test1(int arr[])
//{
//	//��Ԫ�صĵ�ַ����������ַ��Ӧ�÷���ָ���������ȥ
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	//ָ�� - ��Ԫ�صĵ�ַ
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
//һ���Ⱥ��Ǹ�ֵ�������Ⱥ����ж����


//�Ƚ������ַ�����ȣ�����ʹ�� == 
//Ҫ��strcmp


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
//	//��a���1ʱ
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//
//	return 0;
//}

//int main()
//{
//	//��a���1ʱ
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//��ɻ�||
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
//	//��a���1ʱ
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//��ɻ�||
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
//	//��Ŀ������
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
//	//���ű��ʽҪ�����������˼��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
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
//	printf("%d\n", arr[4]);// [] - �±����ò�����
//	//3+5;
//	return 0;
//}

//�����Ķ���
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
//	//��������
//	int ret = Add(a, b); //  () - �������ò�����
//	test();
//	printf("%d\n", ret);
//	return 0;
//}


//�ṹ��Ա���ʲ�����
//.    �ṹ�������.��Ա��
//->   �ṹ��ָ��->��Ա��

//�ṹ�壨�Զ������ͣ�
//
// int float char short double long
//
//�飻��������ţ�����
//�ˣ����֣����䣬�Ա�
//

//struck�ǹ̶����﷨�ṹ
//ע����滹�зֺţ�
//���崴����һ���Զ��������
//struct Book
//{
//	//�ṹ��ĳ�Ա��������
//	char name[20];
//	char id[20];
//	int price;
//};
//
//
//int main()
//{
//	//int num = 10;
//	//�ṹ�������.��Ա��
//	struct Book b = {"C����", "C20220509", 55};//��ʼ��
//	struct Book * pb = &b;
//
//	//�ṹ��ָ��->��Ա��
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("���ۣ�%d\n", pb->price);
//
//
//	//printf("������%s\n", (*pb).name);
//	//printf("��ţ�%s\n", (*pb).id);
//	//printf("���ۣ�%d\n", (*pb).price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);
//	//printf("���ۣ�%d\n", b.price);
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
//	//�����unsigned char����ô��˵���޷��ţ���ô��λ����0
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a ֻ����8��bitλ����Ϊ��1���ֽ�,���λ�Ƿ���λ
//	
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	
//	//00000000000000000000000000000011 - ���int���ͣ�4�ֽڣ�32λ����λ����
//	//00000000000000000000000001111111 - ���շ���λ������������λΪ0��ȫΪ0������Ϊ1���͸�λ����1
//	//00000000000000000000000010000010
//	//��Ҫ���ϣ���Ϊc��char���ͣ�ֻ�ܷ�8λ
//	// c - 10000010
//	// 
//	//����a��b����char���ͣ���û�дﵽһ��int�Ĵ�С
//	//����ͻᷢ����������
//	//���������ǰ��ձ������������͵ķ���λ��������
//	//
//
//	//��ΪҪ��ӡ���ͣ�������Ҫ��������
//	printf("%d\n", c);//-126
//	//11111111111111111111111110000010//����
//	//�ڴ�Ų��룬���Ի�Ҫת����ԭ��
//	//��Ϊ��ӡ���������ǿ�����ԭ�룬���ڴ������ǲ���
//	//11111111111111111111111110000001//����
//	//10000000000000000000000001111110//ԭ��
//	//���ת���¾���c��ֵ
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
//	//+c��-c�ǲ������㣬��Ҫ��������
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//4 gcc��4��VS��1����gccΪ׼
//	return 0;
//}

//ֻ�е�����Ĵ�С����int���͵Ĵ�С��4���ֽڣ�����Ҫ������������
// ��int��Ĳ���Ҫ��������
//����Ҫ����������ֻ��char���ͺ�short���ͣ���Ϊchar������1���ֽڣ�short������2���ֽ�
//%u���Ǵ�ӡһ���޷�����
//%d�Ǵ�ӡ�з�������

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a + b;//ֵ���ԣ���������int
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
//	int c = a + b * 7;//���ȼ���������˳��
//	int c = a + b + 7;//���ȼ�һ�����Ͳ������ã�����Ծ�����˳��
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
//	printf("%d\n", answer);//������٣�
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

//VS - 12  ȫ��i���꣬�����
//gcc - 10 ����ǰ������Ȼ����Ӻ����������

//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%d", strlen(b));
//
//	return 0;
//}


//���һ������
//ʵ�ֺ���init() ��ʼ������ȫΪ0
//ʵ��printf() ��ӡ�����ÿ��Ԫ��
//ʵ��reverse() �����������Ԫ�ص�����

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
	//��������������Ԫ�صĵ�ַ - 0x0012ff44
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