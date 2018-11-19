#define _CRT_SECURE_NO_WARNINGS

#include"4-06-student.h"

int Student::count = 0;     //��̬���ݳ�Ա�ĳ�ʼ��

Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(speciality, spec);
	strcpy(number,num);
	age = ag;
	count++;

}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(speciality, per.speciality);
	strcpy(number, per.name);
	age = per.age;
	count++;
}
Student::~Student()
{
	cout << "disCon" << endl;
	if (name)
		delete[]name;
	count--;
}
char *Student::GetName()const
{
	return name;
}
char *Student::GetSpec()
{
	return speciality;
}
int Student::GetAge()const
{
	return age;
}
char *Student::GetNumber()
{
	return number;
}
void Student::Display()const
{
	cout << "�� ����" << name << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "ר  ҵ��" << speciality << endl;
	cout << "��  �䣺" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "����������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������䣺";
	cin >> age;
	cout << "����רҵ��";
	cin >> speciality;
	cout << "����ѧ�ţ�";
	cin >> number;
	count++;                       //�˾����ӣ�ÿ����һ����ѧ��������1
}
void Student::Insert()            //����
{
	if (!age)                     //�������age��ԱֵΪ0ʱ���ڴ˵���Input��������������������ֵ
		Input();
}
void Student::Delete()             //����
{
	age = 0;                        //ֻ�򵥵ؽ�age��0�����ƶ�����Ԫ��
	count--;
}
int Student::GetCount()
{
	return count;
}

