#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//字符串逆序（递归实现）
//编写reverse_string(char* string)
//实现：将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C语言中字符串操作函数
//例如：char arr[] = "abcdef" 变成 "fedcba"

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *(str + left);//str[left]
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);//
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	//判断条件
//	if (my_strlen(str+1) >= 2)//为什么是>=2，因为最后可能就剩下2个或者1个或者0个字符，然后2个的话还是需要交换，而1个或0个就可以退出来了
//	{
//		reverse_string(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}

//写一个DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如：调用DigitSum（1729），返回1+7+2+9=19，输出19

//int DigitSum(int n)
//{
//
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//	printf("%d\n", sum);
//	return 0;
//}

//递归实现n的k次方

double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		//return 1.0 / (Pow(n, -k));//这里为什么是Pow（n，-k），因为2的-3次，就是2的3次分之一，而这样子只需要搞2的3次就行了
		return 1.0 / (n * Pow(n, -k - 1));//这样也是可以的，就是-1所以少乘了个n，所以n乘上去，因为是将其转换成k>0来做的
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);

	return 0;
}
