#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//ģ��qsort������ʵ��һ��ð�������ͨ���㷨�������Ÿ������ݣ�

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ�˵�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			//char*�ǼӼ������������ֽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test3()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//}
//
//int main()
//{
//	//test3();
//	test4();
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	void* p = &a;//�޾�������
//	p = &ch;
//	*p;//���ʼ����ֽڣ�//error
//	p++;//error
//	return 0;
//}

//int main()
//{
//	////һά����
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16=4*4
//	//printf("%d\n", sizeof(a + 0));//4��8��a+0�ǵ�һ����ַ����Ϊa+0�ˣ���ôa�ͱ�ʾ��Ԫ�صĵ�ַ��+0��ô������Ԫ�صĵ�ַ���Ǿ���4��8��������λ��
//	//printf("%d\n", sizeof(*a));//4�� aҲ�Ǳ�ʾ��Ԫ�صĵ�ַ�������ú����1
//	//printf("%d\n", sizeof(a + 1));//4��8��a+1���ǵڶ���Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(a[1]));//4
//
//	//printf("%d\n", sizeof(&a));//4��8��&a��Ȼ����������ĵ�ַ������Ҳ�ǵ�ַ�����sizeof����ľ���һ����ַ�Ĵ�С
//	//printf("%d\n", sizeof(*&a));//16��&a����������ĵ�ַ�������ú��ҵ��ľ����������飬��ô����16
//	////&a -- int(*p)[4] -- &a
//	//printf("%d\n", sizeof(&a + 1));//4��8��&a��ʾ��������ĵ�ַ��+1����һ�����飬��һ��ռ�ĵ�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(&a[0]));//4��8����һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(&a[0] + 1));//4��8���ڶ���Ԫ�صĵ�ַ
//
//	//�ַ�����
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ��arr��Ԫ�ص�ַ������������û��\0��������ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ��arr��Ԫ�ص�ַ��+0������Ԫ�ص�ַ��������
//	//printf("%d\n", strlen(*arr));//����error����Ԫ�صĵ�ַ�������þ����ַ�a������ȥ����97�����Ǹ��Ϸ��ĵ�ַ
//	//printf("%d\n", strlen(arr[1]));//����error��bΪ98��ͬ��
//	//printf("%d\n", strlen(&arr));//���ֵ����������ĵ�ַ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ������һ������ĵ�ַ
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ��b�ĵ�ַ
//
//	//printf("%d\n", sizeof(arr));//6��
//	//printf("%d\n", sizeof(arr + 0));//4��8��arr��ʾ��Ԫ�ص�ַ��+0������Ԫ�ص�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(*arr));//1����arr����Ԫ�صĵ�ַ��*arr�����þ���a��
//	//printf("%d\n", sizeof(arr[1]));//1��arr[1]����b
//	//printf("%d\n", sizeof(&arr));//4��8��ȡ�������ַ
//	//printf("%d\n", sizeof(&arr + 1));//4��8��&arr����������ĵ�ַ��+1������f����ĵ�ַ�������ǵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4��8��&arr[0]����a�ĵ�ַ��+1����b�ĵ�ַ�����ǵ�ַ
//
//	//char arr[] = "abcdef";
//	////[a,b,c,d,e,f,\0]
//	//printf("%d\n", strlen(arr));//6����Ԫ�ص�ַ
//	//printf("%d\n", strlen(arr + 0));//6����Ԫ�ص�ַ
//	////printf("%d\n", strlen(*arr));//error����a����ȥ�ˣ�97��Ϊ��ַ������
//	////printf("%d\n", strlen(arr[1]));//error��ͬ�ϣ�ֻ����������98�ĵ�ַ
//	//printf("%d\n", strlen(&arr));//6����ʼԪ�صĵ�ַ�����Ǵ���Ԫ�ؿ�ʼ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ��������������ĵ�ַ��\0Ҳ����ȥ�ˣ����Ծ������ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5��b�ĵ�ַ����b��ʼ��
//
//	//printf("%d\n", sizeof(arr));//7���ܴ�С����\0
//	//printf("%d\n", sizeof(arr + 0));//4��8����Ԫ�ص�ַ+0������Ԫ�ص�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(*arr));//1�������þ����ַ�a
//	//printf("%d\n", sizeof(arr[1]));//1�������þ����ַ�b
//	//printf("%d\n", sizeof(&arr));//4��8����������ĵ�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(&arr + 1));//4��8��������������ĵ�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4��8��b�ĵ�ַ�����ǵ�ַ
//
//	//char* p = "abcdef";
//	//// a b c d e f \0��p�����a�ĵ�ַ
//	//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error��*p�ҵ�����a������ȥ��97�������
//	//printf("%d\n", strlen(p[0]));//error��ͬ����
//	//printf("%d\n", strlen(&p));//���ֵ���ҵ���p���׵�ַ��p������ֻ��a�ĵ�ַ�����û��\0���������
//	//printf("%d\n", strlen(&p + 1));//���ֵ��ͬ����
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	
//	//printf("%d\n", sizeof(p));//4��8��p�ǵ�ַ
//	//printf("%d\n", sizeof(p + 1));//4��8��p+1����b�ĵ�ַ�����ǵ�ַ
//	//printf("%d\n", sizeof(*p));//1���ó���a����С����1���ֽ�
//	//printf("%d\n", sizeof(p[0]));//1�����ַ����������������ʣ�p[0] = *(p+0)�����Ի����ҵ�a
//	//printf("%d\n", sizeof(&p));//4��8��ȡ�û��ǵ�ַ
//	//printf("%d\n", sizeof(&p + 1));//4��8��ȡ������������p�ĵ�ַ�������ǵ�ַ
//	//printf("%d\n", sizeof(&p[0] + 1));//4��8��ȡ�����ǵڶ���Ԫ��b�ĵ�ַ
//
//	//��ά����
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//3*4*4 = 48....3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4����һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4��8�����ͣ�a[0]��Ϊ����������û�е�������sizeof�ڲ���
//									 //Ҳû��ȡ��ַ&��������1��ϣ�
//									 //����a[0]�ʹ����һ�е�һ���ĵ�ַ��+1���ǵڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4�����ͣ���(a[0]+1)��һ�еڶ���Ԫ�صĵ�ַ�����þ��ǵڶ���Ԫ�أ���int����
//
//	printf("%d\n", sizeof(a + 1));//4��8�����ͣ�a��û�е�������sizeof�ڲ�����˾���Ϊ��ά������Ԫ�صĵ�ַ��
//								  //��ά������Ԫ�ؾ��ǵ�һ��,+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16�����ͣ�a+1�ǵڶ��еĵ�ַ�����Խ������ǵڶ��У�*(a+1)<-->a[1]
//									 //���Լ���ľ��ǵڶ��еĴ�С
//
//	printf("%d\n", sizeof(&a[0] + 1));//4��8�����ͣ�a[0]�ǵ�һ�е���������ȡ��ַ&a[0]��ȡ���ľ��ǵ�һ�еĵ�ַ
//									  //+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16���������õ��ľ��ǵڶ���
//
//	printf("%d\n", sizeof(*a));//16��aû�е�������sizeof�У�����a��ʾ��Ԫ�صĵ�ַ������һ�еĵ�ַ�������þ��ǵ�һ��
//
//	printf("%d\n", sizeof(a[3]));//16��a[3]�������ﲻ���ڣ�a[3]��ʵ�ǵ�����������������еĻ���
//								 //������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
//
//
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//				*(ptr+(-1)) --> *(ptr-1)
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//����С�����������ģ����Ƕ��ű��ʽ
//	//					1     3       5
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//int(*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
