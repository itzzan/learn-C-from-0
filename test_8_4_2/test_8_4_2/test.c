#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//Ԥ����������
//ͨ������ļ��ɡ����ٴ���

//ģ��ʵ��strcpy
//strcpy - �ַ�������(�����ַ�������������\0)

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	//\0��Ҫ�Ž�ȥ
//	*dest = *src;
//}

#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//assert(src != NULL);//���� - �����ж�������Ϊ�پͱ���Ϊ��ʲô�¶�û��
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, const char* src)
//{
//	//assert(src != NULL);//���� - �����ж�������Ϊ�پͱ���Ϊ��ʲô�¶�û��
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;//hello�Ŀ���
//	}
//}
//
//
//int main()
//{
//	
//	char arr1[20] = "XXXXXXXX";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);//1. Ŀ��ռ����ʼ��ַ��2. Դ�ռ����ʼ��ַ
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	//1.
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;*/
//
//	//2.
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//	const int num = 10;
//	//num = 20  error
//
//	//const int* p = &num;
//	//int n = 100;
//	////const ����ָ�������ʱ��
//	//  const ��int�޹أ���*�йأ����������
// 	////const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////		����ָ����������ǿ����޸ĵ�
//	////*p = 20;//err
//	//p = &n;//ok
//
//	int* const p = &num;
//	int n = 100;
//	//const ����ָ�������ʱ��
//	//const �������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//	//		����ָ��ָ��������ǿ����޸ĵ�
//	*p = 20;//ok
//	p = &n;//err
//
//
//
//	printf("%d\n", num);
//	printf("%p\n", p);
//
//	return 0;
//}

//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ����޸�

//strcpy����⺯����ʵ���ص���Ŀ��ռ����ʼ��ַ
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���� - �����ж�������Ϊ�پͱ���Ϊ��ʲô�¶�û��
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello�Ŀ���
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//
//int main()
//{
//	
//	char arr1[20] = "XXXXXXXX";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);//1. Ŀ��ռ����ʼ��ַ��2. Դ�ռ����ʼ��ַ
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//	return 0;
//}

//strlen - ���ַ�������
//ģ��ʵ��my_strlen
//1.const
//2.assert

//��׳��
//³����

//size_t - unsigned int

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "asdasda";
//	printf("%zd\n", my_strlen(arr));
//
//	return 0;
//}



size_t my_strlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//�����ⲿ����
extern size_t my_strlen(const char* str);

int main()
{
	char arr[] = "asdasda";
	printf("%d\n", my_strlen(arr));

	return 0;
}
//Ҫ��������žͲ�����
//Ҫ���������д����