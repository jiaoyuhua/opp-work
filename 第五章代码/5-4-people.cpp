#define _CRT_SECURE_NO_WARNINGS
#include "5-4-people.h";
//Date��
void Date::set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::getyear()
{
	return year;
}
int Date::getmonth()
{
	return month;
}
int Date::getday()
{
	return day;
}
//Person��
Person::Person()
{
	strcpy(name, "00");
}
char* Person::getname()
{
	return name;
}
void Person::input()
{
	cout << "������Ϣ" << endl;
	cout << "������ ";
	cin >> name;
	cout << "��ţ� ";
	cin >> number;
	int y, m, d;
	cout << "�������ڣ��꣬�£���)��";
	cin >> y >> m >> d;
	birthday.set(y, m, d);
	cout << "�Ա�";
	cin >> sex;
}
void Person::output()
{
	cout << "������" << name<<endl;
	cout << "��ţ�" << number << endl;
	cout << "�Ա�";
	if (sex == 'm')
		cout << "Ů" << endl;
	else
		cout << "��" << endl;
	cout << "�������ڣ�" << birthday.getyear() << '-' << birthday.getmonth() << '-' << birthday.getday() << endl;

}
//Student��
void Student::input()
{
	Person::input();//����Person��������Ϣ
	cout << "רҵ��";
	cin >> speciality;
}
void Student::output()
{
	Person::output();
	cout << "רҵ��" << speciality << endl;
}
//Graduate���ʵ��
void Graduate::input()
{
	Student::input();//�̳�Student���input������Person
	cout << "�о����⣺";
	cin >> researchtopic;

}
void Graduate::output()
{
	Student::output();
	cout << "�о����⣺" << researchtopic << endl;
}
//Teacher��
void Teacher::input()
{
	Person::input();
	cout << "ְ�ƣ�";
	cin >> academictitle;
}
void Teacher::output()
{
	Person::output();
	cout << "ְ�ƣ�" << academictitle << endl;
}
//postgraduateonjob��
void postgraduateonjob::input()
{
	Graduate::input();
	cout << "ְ�ƣ�";
	cin >> academictitle;//�̳е�teacher��
}
void postgraduateonjob::output()
{
	Graduate::output();
	cout << "ְ�ƣ�" << academictitle << endl;
}
