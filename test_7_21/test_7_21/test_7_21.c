#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> //ͷ�ļ�

//int main()
//{
//	int input = 0; //�����ֵ
//	printf("�������:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��office\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//
//	return 0;
//}

//���� -30000���� - ��һ������Ĺ���

//int main()
//{
//	int line = 0;
//	//ѭ��
//	while (line < 30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//
//	if (line == 30000)
//	{
//		printf("��office\n");
//	}
//	printf("д����");
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
//	//�����ķ�ʽ���
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
//	//���� - һ����ͬ���͵�Ԫ�صļ���
//	//10������ 1-10������
//	//���������±������ʵ�
//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//while(i < 10)
//	//{
//	//	printf("%d ", arr[i]);
//	//	i++;
//	//}
//	//char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//	//�������˶���������ִ���������������������һ����С������ô��ִ��С������
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2; // % - ȡģ(��)
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
//	//C�������棬0��ʾ�٣���0��ʾ��
//	int a = 0;
//	printf("%d\n", !a);// ���Ѽٱ����ģ��涨Ϊ1
//
//	if (a)
//	{
//		//���aΪ�棬����
//	}
//	if (!a)
//	{	
//		//���aΪ�٣�����
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//int main()
//{
//	//sizeof��һ�������������Ǻ������������ͻ��߱����Ĵ�С
//	//������������Ų���ɾȥ
//	//ͨ��ʹ��һ�㶼��ʡ��
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
	printf("%d\n", sizeof(arr)); // �������������ܴ�С����λ���ֽ�
	printf("%d\n", sizeof(arr[0]));// 4
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}