#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>

//int i = 0;//i��ȫ�ֱ���������ʼ��Ĭ����0
//int main()
//{
//	i--;
//	//sizeof����������������Ľ����������unsigned int
//	if (i > sizeof(i))//���i������ת����-1�Ĳ�����32��1��ת�����޷��ŵģ�˵��ȫ������Ч���֣�����һ���ܴ����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa ��ǰ5��֮�ͣ�����a��һ������
//���磺2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int cet = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		cet = cet * 10 + a;
//		sum = sum + cet;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//int main()
//{
//	//��a���ǰn��֮�� - ���������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//���һ��
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("num = %d", sum);
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *pa + i);//�����error����Ϊ*pa�����Ѿ��������ˣ����Դ���Ԫ�أ���pa�����ַ��δ������
//		printf("%d ", *(pa + i));
//	}
//
//
//	return 0;
//}

//ȡ��0~100000֮�����е�ˮ�ɻ��������
//ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�磺153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3����153��һ��ˮ�ɻ���

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ����i��λ��n
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. ����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);//pow��������η���ǰ���Ǽ���������ָ������n��
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//		{
//			printf("%d��ˮ�ɻ���\n", i);
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;// *(p+3) = *(p+3) + 3
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//�ַ�������
//дһ����������������һ���ַ���������
#include <string.h>
#include <assert.h>
//void reverse(char* pa, int left, int right)
//{
//	assert(pa);
//	while (left < right)
//	{
//		char tmp = *(pa + left);
//		*(pa + left) = *(pa + right);
//		*(pa + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[] = "abcdefg";//gfedcba
//	//char* arr = "abcdef"���У���Ϊ���ǳ����ַ��������ܸı�
//	int sz = strlen(a);
//	reverse(a, 0, sz - 1);
//	printf("%s", a);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//�Ǻ�
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//�Ǻ�
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n;
//	
//	while (n > 1)
//	{
//		int ret = 0;
//		ret = n / 2;
//		sum = sum + ret;
//		if (n % 2 == 1)
//		{
//			n++;
//		}
//		n = n / 2;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//��������ż��˳��
//ʹ����ȫ��λ��ż��ǰ��
//����һ���������飬��ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
//����ż��λ������ĺ�벿��

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
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//����������a��b
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100 - c
//	//�ض� - 00101100
//
//	printf("%d %d", a + b, c);//300 44
//	//������Ҫ��������
//	//a+b = 00000000000000000000000100101100 - 300
//	//c   = 00101100
//	//c   = 00000000000000000000000000101100 - 44
//	return 0;
//}

//��ӡ�������
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��ѧ -> 5

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1)
							&& ((c == 5) + (d == 3) == 1)
							&& ((e == 4) + (a == 1))
							)
						{
							if (a * b * c * d * e == 120)
							{
								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}

	return 0;
}
