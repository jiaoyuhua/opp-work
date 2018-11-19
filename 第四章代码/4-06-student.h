#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char speciality[20];
	char number[10];
	int age;
	static int count;              //ʵ����Ч��ѧ��������С�ڵ��ڶ���ĸ���
public:
	Student();
	Student(char *na, char *num, char *space, int ag);
	Student(const Student &per);
	~Student();
	char* GetName() const;           //���Զ���Ϊ����Ա����                  
	char* GetNumber();    //�����Զ���Ϊ����Ա����
	char* GetSpec(); //�����Զ���Ϊ����Ա����
	int GetAge()const;
	void Display()const;
	void Input();
	void Insert();
	void Delete();
	static int GetCount();              //�����ӵľ�̬��Ա����
};
#endif