#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//�ַ������򣨵ݹ�ʵ�֣�
//��дreverse_string(char* string)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ
//Ҫ�󣺲���ʹ��C�������ַ�����������
//���磺char arr[] = "abcdef" ��� "fedcba"

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
//	//�ж�����
//	if (my_strlen(str+1) >= 2)//Ϊʲô��>=2����Ϊ�����ܾ�ʣ��2������1������0���ַ���Ȼ��2���Ļ�������Ҫ��������1����0���Ϳ����˳�����
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
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}

//дһ��DigitSum(n)������һ���Ǹ����������������������֮��
//���磺����DigitSum��1729��������1+7+2+9=19�����19

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

//�ݹ�ʵ��n��k�η�

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
		//return 1.0 / (Pow(n, -k));//����Ϊʲô��Pow��n��-k������Ϊ2��-3�Σ�����2��3�η�֮һ����������ֻ��Ҫ��2��3�ξ�����
		return 1.0 / (n * Pow(n, -k - 1));//����Ҳ�ǿ��Եģ�����-1�����ٳ��˸�n������n����ȥ����Ϊ�ǽ���ת����k>0������
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
