#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> //头文件

//int main()
//{
//	int input = 0; //输入的值
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)>");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好office\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//
//	return 0;
//}

//比特 -30000代码 - 找一个不错的工作

//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//
//	if (line == 30000)
//	{
//		printf("好office\n");
//	}
//	printf("写代码");
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int cnt = 0;
//    scanf("%d", &a);
//    while (a > 1)
//    {
//        if (a % 2 == 0) {
//            a = a / 2;
//            cnt++;
//        }
//        else {
//            a = (a * 3 + 1) / 2;
//            cnt++;
//        }
//    }
//    printf("%d", cnt);
//    return 0;
//}


//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//
//	
//	// .....
//	
//	//数组 - 一组相同类型的元素的集合
//	//10个整型 1-10存起来
//	//数组是用下标来访问的
//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//while(i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	//char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余的默认为0
//
//	//除号两端都是整数，执行整数除法，如果两端有一端是小数，那么就执行小数除法
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2; // % - 取模(余)
//	
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	return 0;
//}

//int main()
//{
//	//C语言里面，0表示假，非0表示真
//	int a = 0;
//	printf("%d\n", !a);// 当把假变成真的，规定为1
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{	
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符，不是函数，计算类型或者变量的大小
//	//函数后面的括号不能删去
//	//通常使用一般都不省略
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//
//	return 0;
//}

int main()
{
	int arr[10] = {0};
	printf("%d\n", sizeof(arr)); // 计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));// 4
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}