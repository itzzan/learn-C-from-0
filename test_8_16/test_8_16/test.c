#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};

//int main()
//{
//	struct S s = { 0 };
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//��ӡ
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//�����ƵĶ�д

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//�����Ƶ���ʽд
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//���ļ�
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//�����Ƶ���ʽ��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	//��ӡ
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//	char buf[100] = {0};
//	//sprintf��һ����ʽ�������ݣ�ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//��buf�ַ����л�ԭ��һ���ṹ��
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	
//	//�����ļ�ָ��
//	//fseek(pf, -1, SEEK_CUR);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//
//	//fseek(pf, 2, SEEK_CUR);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//d
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//e
//
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//0000 0000 0000 0000 0010 0111 0001 0000
// 0     0    0   0    2     7   1     0
//00 00 27 10

int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//д�ļ�
	fwrite(&a, sizeof(int), 1, pf);


	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}