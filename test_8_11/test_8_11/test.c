#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	/*char* p = "obc";
//	char* q = "abcdef";
//	if (p > q)
//	{
//
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}*/
//
//	/*if ("obc" > "abcdef")
//	{
//
//	}*/
//
//	//strcmp - �ַ����Ƚϴ�С
//	//int ret = strcmp("aabb", "aapp");//<0
//	//int ret = strcmp("aqqq", "aaaa");//>0
//	int ret = strcmp("aaaa", "aaaa");//=0
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abqb";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr, arr2, 2);//qwcdef
//	//strcpy(arr, arr2);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello \0##############";
//				   //hello world\0
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);//׷�ӻ�������\0��׷��ֻ��׷�ӱ������������ٶ���0
//	printf("%s", arr1);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	//int ret = strncmp(p, q, 3);//0
//	int ret = strncmp(p, q, 4);//-1
//
//	printf("%d", ret);
//
//	return 0;
//}

//strstr - ��һ���ַ���������һ���ַ���

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*cp != '\0')
//	{
//		s1 = cp;
//		s2 = str2;
//		//abcdef
//		//cdef
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//��arr1�в����Ƿ����arr2����
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%s\n", ret);
//	}
//	
//	return 0;
//}

//KMP�㷨 - �ַ��������㷨

//zpw@bitedu.tech
//zpw
//bitedu
//tech

//192.168.3.122
//192
//168
//3
//122

//strtok - �и��ַ���

//zpw@bitedu.tech
//@.

//int main()
//{
//	char arr[] = "zpw@bitedu.tech hehe";
//	//            zpw\0
//	char* p = "@. ";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	//zpw\0bitedu\0tech\0 - ���¼\0��λ��
//	//ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݣ����ҿ��޸�
//	
//	//strtok(tmp, "@.");
//	char* ret = NULL;
//	
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	
//
//	return 0;
//}



//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����
//ȫ�ֵĴ�����
//int errno;//5

#include <errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;


	return 0;
}
