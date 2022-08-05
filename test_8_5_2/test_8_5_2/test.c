#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//
//}

//int main()
//{
//	int x = 1;
//	do 
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//
//	return 0;
//}
//
//int main()
//{
//	//int i = 1;
//	//int j;
//	//j = i++;
//	
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//+的优先级高
//	k *= (i + j);//good
//	printf("%d", k);
//
//	return 0;
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0, c = 0;
//	do
//	{
//		--c;
//		a = a - 1;
//	} while (a > 0);
//
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;
//	return 0;
//}


#include <stdio.h>
#include <string.h>

void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = 0;
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}


int main()
{
    char a[100] = { 0 };
    //scanf("%s", a);//因为遇到空格就停止了
    gets(a);
    //三步翻转法
    //1. 字符串整体翻转
    // .gnijieb ekil I
    int len = strlen(a);
    reverse(a, a + len - 1);
    printf("%s", a);
    //2. 每个单词逆序
    //beijing. like I

    return 0;
}