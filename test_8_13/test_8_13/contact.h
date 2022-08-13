#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000


//����ṹ������ - ���͵Ķ���
typedef struct PeoInfo 
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//�����ӽ������˵���Ϣ
	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ӡ��ϵ����Ϣ
void PrintContact(const Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ�˲���
void ModifyContact(Contact* pc);

