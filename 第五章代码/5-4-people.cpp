#define _CRT_SECURE_NO_WARNINGS
#include "5-4-people.h";
//Date类
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
//Person类
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
	cout << "输入信息" << endl;
	cout << "姓名： ";
	cin >> name;
	cout << "编号： ";
	cin >> number;
	int y, m, d;
	cout << "出生日期（年，月，日)：";
	cin >> y >> m >> d;
	birthday.set(y, m, d);
	cout << "性别：";
	cin >> sex;
}
void Person::output()
{
	cout << "姓名：" << name<<endl;
	cout << "编号：" << number << endl;
	cout << "性别：";
	if (sex == 'm')
		cout << "女" << endl;
	else
		cout << "男" << endl;
	cout << "出生日期：" << birthday.getyear() << '-' << birthday.getmonth() << '-' << birthday.getday() << endl;

}
//Student类
void Student::input()
{
	Person::input();//加上Person的输入信息
	cout << "专业：";
	cin >> speciality;
}
void Student::output()
{
	Person::output();
	cout << "专业：" << speciality << endl;
}
//Graduate类的实现
void Graduate::input()
{
	Student::input();//继承Student里的input，包括Person
	cout << "研究课题：";
	cin >> researchtopic;

}
void Graduate::output()
{
	Student::output();
	cout << "研究课题：" << researchtopic << endl;
}
//Teacher类
void Teacher::input()
{
	Person::input();
	cout << "职称：";
	cin >> academictitle;
}
void Teacher::output()
{
	Person::output();
	cout << "职称：" << academictitle << endl;
}
//postgraduateonjob类
void postgraduateonjob::input()
{
	Graduate::input();
	cout << "职称：";
	cin >> academictitle;//继承的teacher类
}
void postgraduateonjob::output()
{
	Graduate::output();
	cout << "职称：" << academictitle << endl;
}
