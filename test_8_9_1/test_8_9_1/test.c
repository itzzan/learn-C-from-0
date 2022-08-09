#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//模仿qsort函数，实现一个冒泡排序的通用算法（可以排各种数据）

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
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			//char*是加几就跳过几个字节
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
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
//	void* p = &a;//无具体类型
//	p = &ch;
//	*p;//访问几个字节？//error
//	p++;//error
//	return 0;
//}

//int main()
//{
//	////一维数组
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16=4*4
//	//printf("%d\n", sizeof(a + 0));//4或8，a+0是第一个地址，因为a+0了，那么a就表示首元素的地址，+0那么还是首元素的地址，那就是4或8，看电脑位数
//	//printf("%d\n", sizeof(*a));//4， a也是表示首元素的地址，解引用后就是1
//	//printf("%d\n", sizeof(a + 1));//4或8，a+1就是第二个元素的地址
//	//printf("%d\n", sizeof(a[1]));//4
//
//	//printf("%d\n", sizeof(&a));//4或8，&a虽然是整个数组的地址，但是也是地址，因此sizeof计算的就是一个地址的大小
//	//printf("%d\n", sizeof(*&a));//16，&a是整个数组的地址，解引用后找到的就是整个数组，那么就是16
//	////&a -- int(*p)[4] -- &a
//	//printf("%d\n", sizeof(&a + 1));//4或8，&a表示整个数组的地址，+1跳过一个数组，下一块空间的地址，还是地址
//	//printf("%d\n", sizeof(&a[0]));//4或8，第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));//4或8，第二个元素的地址
//
//	//字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//随机值，arr首元素地址，往后数，但没有\0，因此随机值
//	//printf("%d\n", strlen(arr + 0));//随机值，arr首元素地址，+0还是首元素地址，因此随机
//	//printf("%d\n", strlen(*arr));//错误error，首元素的地址，解引用就是字符a，传过去就是97，不是个合法的地址
//	//printf("%d\n", strlen(arr[1]));//错误error，b为98，同上
//	//printf("%d\n", strlen(&arr));//随机值，整个数组的地址
//	//printf("%d\n", strlen(&arr + 1));//随机值，跳过一个数组的地址
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值，b的地址
//
//	//printf("%d\n", sizeof(arr));//6，
//	//printf("%d\n", sizeof(arr + 0));//4或8，arr表示首元素地址，+0还是首元素地址，还是地址
//	//printf("%d\n", sizeof(*arr));//1，因arr是首元素的地址，*arr解引用就是a，
//	//printf("%d\n", sizeof(arr[1]));//1，arr[1]就是b
//	//printf("%d\n", sizeof(&arr));//4或8，取出这个地址
//	//printf("%d\n", sizeof(&arr + 1));//4或8，&arr是整个数组的地址，+1跳到了f后面的地址，但还是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4或8，&arr[0]就是a的地址，+1就是b的地址，还是地址
//
//	//char arr[] = "abcdef";
//	////[a,b,c,d,e,f,\0]
//	//printf("%d\n", strlen(arr));//6，首元素地址
//	//printf("%d\n", strlen(arr + 0));//6，首元素地址
//	////printf("%d\n", strlen(*arr));//error，将a传过去了，97作为地址有问题
//	////printf("%d\n", strlen(arr[1]));//error，同上，只不过传的是98的地址
//	//printf("%d\n", strlen(&arr));//6，起始元素的地址，还是从首元素开始
//	//printf("%d\n", strlen(&arr + 1));//随机值，跳出整个数组的地址，\0也跳过去了，所以就是随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5，b的地址，从b开始数
//
//	//printf("%d\n", sizeof(arr));//7，总大小，算\0
//	//printf("%d\n", sizeof(arr + 0));//4或8，首元素地址+0还是首元素地址，还是地址
//	//printf("%d\n", sizeof(*arr));//1，解引用就是字符a
//	//printf("%d\n", sizeof(arr[1]));//1，解引用就是字符b
//	//printf("%d\n", sizeof(&arr));//4或8，整个数组的地址，还是地址
//	//printf("%d\n", sizeof(&arr + 1));//4或8，跳过整个数组的地址，还是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4或8，b的地址，还是地址
//
//	//char* p = "abcdef";
//	//// a b c d e f \0，p存的是a的地址
//	//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error，*p找到的是a，传进去是97，会出错
//	//printf("%d\n", strlen(p[0]));//error，同上理
//	//printf("%d\n", strlen(&p));//随机值，找的是p的首地址，p里面存的只是a的地址，因此没有\0，所以随机
//	//printf("%d\n", strlen(&p + 1));//随机值，同上理
//	//printf("%d\n", strlen(&p[0] + 1));//5
//	
//	//printf("%d\n", sizeof(p));//4或8，p是地址
//	//printf("%d\n", sizeof(p + 1));//4或8，p+1就是b的地址，还是地址
//	//printf("%d\n", sizeof(*p));//1，拿出来a，大小就是1个字节
//	//printf("%d\n", sizeof(p[0]));//1，将字符串当作数组来访问，p[0] = *(p+0)，所以还是找到a
//	//printf("%d\n", sizeof(&p));//4或8，取得还是地址
//	//printf("%d\n", sizeof(&p + 1));//4或8，取的是跳出整个p的地址，但还是地址
//	//printf("%d\n", sizeof(&p[0] + 1));//4或8，取出的是第二个元素b的地址
//
//	//二维数组
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//3*4*4 = 48....3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4，第一行第一个元素
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4或8，解释：a[0]作为数组名，并没有单独放在sizeof内部，
//									 //也没有取地址&，而是与1结合，
//									 //所以a[0]就代表第一行第一个的地址，+1就是第二个元素的地址
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4，解释：对(a[0]+1)第一行第二个元素的地址解引用就是第二个元素，是int类型
//
//	printf("%d\n", sizeof(a + 1));//4或8，解释：a并没有单独放在sizeof内部，因此就作为二维数组首元素的地址，
//								  //二维数组首元素就是第一行,+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16，解释：a+1是第二行的地址，所以解引用是第二行，*(a+1)<-->a[1]
//									 //所以计算的就是第二行的大小
//
//	printf("%d\n", sizeof(&a[0] + 1));//4或8，解释：a[0]是第一行的数组名，取地址&a[0]，取出的就是第一行的地址
//									  //+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16，解引用拿到的就是第二行
//
//	printf("%d\n", sizeof(*a));//16，a没有单独放在sizeof中，所以a表示首元素的地址，即第一行的地址，解引用就是第一行
//
//	printf("%d\n", sizeof(a[3]));//16，a[3]在数组里不存在，a[3]其实是第四行数组名（如果有的话）
//								 //所以其实不存在，也能通过类型计算大小的
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

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//用了小括号括起来的，就是逗号表达式
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
