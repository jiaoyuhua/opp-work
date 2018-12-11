#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<cstring>

using namespace std;

class Date
{
protected:
	int year;
	int month;
	int day;
public:
	void set(int y, int m, int d);
	int getyear();
	int getmonth();
	int getday();
};
class Person
{
protected:
	char name[20];
	char number[10];
	char sex;
	Date birthday;
public:
	Person();
	char* getname();
	void input();
	void output();
};
class Student :virtual public Person
{
protected:
	char speciality[20];
public:
	void input();
	void output();
};
class Graduate :virtual public Student
{
protected:
	char researchtopic[50];//研究课题
public:
	void input();
	void output();
};
class Teacher :virtual public Person
{
protected:
	char academictitle[20];//教师职称
public:
	void input();
	void output();
};
class postgraduateonjob :public Graduate, public Teacher
{
public:
	void input();
	void output();
};
#endif

