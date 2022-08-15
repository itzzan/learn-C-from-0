#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,1,2,3,4 };
//	int(*pa)[10] = &arr;
//	int c = sizeof(*pa);
//	printf("%d", c);
//	return 0;
//}

//GetMemory 函数内部创建的数组是在栈区上创建的
//出了函数，p数组的空间就还给了操作系统
//返回了地址是没有实际意义，如果通过返回的地址，去访问内存就是非法访问内存
// 
//char* GetMemory(void) 
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void) 
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//
//	return 0;
//}


//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//大小是未知
//};

//struct S
//{
//	int n;
//	int arr[0];//大小是未知
//};
//
//int main()
//{
//	//期望arr的大小是10个整形
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增加
//	struct S* ptr = (struct S*)realloc(ps, sizeof(sizeof(struct S) + 20 * sizeof(int)));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	//struct S s = { 0 };
//	//printf("%d\n", sizeof(s));//?
//
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//	ps->n = 10;
//	ps->arr = (int*)malloc(10 * sizeof(int));
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//增加
//	int* ptr = realloc(ps->arr, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	free(ptr);
//	ptr = NULL;
//
//
//	free(ps);
//	ps = NULL;
//
//
//	return 0;
//}


#include <stdio.h>

int main()
{
    int a[7];
    while (scanf("%d%d%d%d%d%d%d", &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]) != EOF)
    {
        int sum = 0;
        int score = 0;
        int i = 0;
        int max = 0;
        int min = 100;
        for (i = 0; i < 7; i++)
        {
            scanf("%d", &score);
            {
                sum += score;
                if (max < score)
                    max = score;
                if (min > score)
                    min = score;
            }
        }
        printf("%.2f\n", (sum - max - min) / 5.00);
    }

    return 0;
}
