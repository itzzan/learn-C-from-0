#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}while (i <= 10);
//	printf("hehe\n");
//	return 0;
//}

// while for do while

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int sum = 1;
//	scanf("%d", &i);
//	//while (j <= i)
//	//{
//	//	sum = sum * j;
//	//	j++;
//	//}
//	/*for (j = 1; j <= i; j++)
//	{
//		sum = sum * j;
//	}*/
//	do {
//		sum = sum * j;
//		j++;
//	} while (j <= i);
//
//
//	printf("%d", sum);
//
//	return 0;
//}

//计算1!+2!+3!+……+10!

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 10)
//	{
//		ret = 1;//计算n的阶乘之前，把ret初始为1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		
//		n++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}//ret 的值没有初始化，所以出错
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//改进 - 时间复杂度更低，因为只用一个循环

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n
//用下标来查找，二分查找（折半查找）
//最坏的查找（最长查找） log2（n） 向上取整
//找出这组数字最中间的元素的下标，以这个元素与要查找的元素比较，看元素在左边还是在右边

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数组
//
//	//目标：在arr这个有序的数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小/第一个元素的大小，等于数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!!
//####################

//w##################!
//we################!!
//wel##############!!!
//........
//welcome to bit!!!!!!

//用sleep需要引入头文件#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒中，1000是毫秒
//		system("cls");//清空屏幕
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


// 编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//假设正确的密码是字符串“123456”
//strcmp也是要引头文件的，#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")//错误err - 两个字符串的比较，不能使用==，一个使用strcmp（）
//		// 这种比较的话其实是比较两个字符串首字符的地址，而我们应该比较这两个字符串的内容
//		//strcmp当等于时会输出0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重更新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//
//	return 0;
//}


//写一个猜数字游戏
//1. 自动生成一个1-100的随机数
//2. 猜数字
//	a.猜对了，就恭喜你，游戏结束
//  b.猜错了，会告诉你猜大了还是猜小了，继续猜，直到猜对为止
//3. 游戏可以一直玩，除非退出游戏
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("*********1. play**********\n");
	printf("*********0. exit**********\n");
	printf("**************************\n");
}

void game()
{
	//猜数字游戏的实现
	//1. 生成随机数
	//rand函数返回了一个0-32767之间的数字
	//时间 - 一直在变化 - 时间戳
	//srand返回是unsigned int类型，而time返回time_t类型，所以这边要强转

	int ret = rand()%100;//%100的余数是0-99，然后+1，范围就是1-100.任何数%100范围都在0-99之间
	//printf("%d\n", ret);
	//2. 猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand是不需要频繁的设计起点，可以猜测，如果频繁的设计起点，随机数可能就不随机
	//而只设计一次，就足够随机了

	do 
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
		
	} while (input);

		

	return 0;
}