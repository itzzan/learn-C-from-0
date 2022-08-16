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
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//打印
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//二进制的读写

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//二进制的形式写
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//读文件
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
//	//二进制的形式读
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//	//打印
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//关闭文件
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
//	//sprintf把一个格式化的数据，转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//从buf字符串中还原出一个结构体
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
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	
//	//调整文件指针
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
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//关闭文件
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
	//写文件
	fwrite(&a, sizeof(int), 1, pf);


	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}