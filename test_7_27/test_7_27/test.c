#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//f(x) = 2 * x + 1;

//Debug���Ե��Եİ汾
//release���Եİ汾�������Ե���
//size_t ����unsigned int

//int main()
//{
//	//ָ���ǵ�ַ�����ַ�����Ҳ�ǵ�ַ�����ԾͲ��ü�ָ��
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ�������%s��ӡ��%s - ���ַ����ĸ�ʽ����ӡ
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

//дһ�����������ҵ��������������ֵ

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
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//�����������͵���

//�����������͵ĵط�д��void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//д��������
// ��������õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
// �ı��βΣ���ʵ���ܸı�ʵ��
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
//	//дһ������ - �����������͵ı�����ֵ
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);//��ֵ����
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//	int* pa = &a;//pa����һ��ָ�����
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
//	//дһ������ - �����������͵ı�����ֵ
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);//��ַ����
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//�������ֲ��У����Ǵ�����ȥ����ַһֱ���䣬��ֻ���õ�ַ��������ָ��
//�����get_maxֻ�����max������ı�a��b��ֵ
//�������Swap�����ι�ȥ�󣬻�Ҫ������Ҳ������������������л����ߵ�x��y����������������Ҫ���ⲿ�����ڲ��Ľ�����ϵ
//������Ҫ�����ַ
//returnֻ�ܷ���һ��ֵ�����ܷ��ض��ֵ

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
//	//дһ������ - �����������͵ı�����ֵ
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



