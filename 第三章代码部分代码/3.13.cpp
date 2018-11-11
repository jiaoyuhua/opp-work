#define _CRT_SECURE_NO_WARNINGS


#include<iostream>

#include<cstring>

using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);
	~Student();
	void show();
	Student(const Student &r);
};
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;
}
void Student::show()
{
	cout << "specialty= " << specialty << endl;
}
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else specialty = 0;
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.show();
	wang.show();

	getchar();
	return 0;



}



