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

//����n�Ľ׳�
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

//����1!+2!+3!+����+10!

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 10)
//	{
//		ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
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
//		}//ret ��ֵû�г�ʼ�������Գ���
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//�Ľ� - ʱ�临�Ӷȸ��ͣ���Ϊֻ��һ��ѭ��

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

//��һ�����������в��Ҿ����ĳ������n
//���±������ң����ֲ��ң��۰���ң�
//��Ĳ��ң�����ң� log2��n�� ����ȡ��
//�ҳ������������м��Ԫ�ص��±꣬�����Ԫ����Ҫ���ҵ�Ԫ�رȽϣ���Ԫ������߻������ұ�

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//
//	//Ŀ�꣺��arr�������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С/��һ��Ԫ�صĴ�С�����������Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���
//welcome to bit!!!!!!
//####################

//w##################!
//we################!!
//wel##############!!!
//........
//welcome to bit!!!!!!

//��sleep��Ҫ����ͷ�ļ�#include <windows.h>
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
//		Sleep(1000);//˯��1���У�1000�Ǻ���
//		system("cls");//�����Ļ
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//������ȷ���������ַ�����123456��
//strcmpҲ��Ҫ��ͷ�ļ��ģ�#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")//����err - �����ַ����ıȽϣ�����ʹ��==��һ��ʹ��strcmp����
//		// ���ֱȽϵĻ���ʵ�ǱȽ������ַ������ַ��ĵ�ַ��������Ӧ�ñȽ��������ַ���������
//		//strcmp������ʱ�����0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������ظ������룡\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//
//	return 0;
//}


//дһ����������Ϸ
//1. �Զ�����һ��1-100�������
//2. ������
//	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//  b.�´��ˣ��������´��˻��ǲ�С�ˣ������£�ֱ���¶�Ϊֹ
//3. ��Ϸ����һֱ�棬�����˳���Ϸ
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
	//��������Ϸ��ʵ��
	//1. ���������
	//rand����������һ��0-32767֮�������
	//ʱ�� - һֱ�ڱ仯 - ʱ���
	//srand������unsigned int���ͣ���time����time_t���ͣ��������Ҫǿת

	int ret = rand()%100;//%100��������0-99��Ȼ��+1����Χ����1-100.�κ���%100��Χ����0-99֮��
	//printf("%d\n", ret);
	//2. ������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand�ǲ���ҪƵ���������㣬���Բ²⣬���Ƶ���������㣬��������ܾͲ����
	//��ֻ���һ�Σ����㹻�����

	do 
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
		
	} while (input);

		

	return 0;
}