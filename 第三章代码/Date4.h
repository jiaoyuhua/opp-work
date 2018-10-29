#include<iostream>

using namespace std;

class Date
{
	int year, month, day;
public:
	Date(int y = 2018, int m = 10, int d = 28);
	Date(const Date &date);
	void Display();
	~Date();

};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "调用构造函数" << endl;
}
/*Date::Date(const Date &date)
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "调用拷贝函数" << endl;
}*/
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
Date::~Date()
{
	cout << "调用析构函数" << endl;
}
