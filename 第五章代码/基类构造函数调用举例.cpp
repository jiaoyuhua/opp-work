#include<iostream>

using namespace std;
class Base
{
private:
	int x;
public:
	Base(int i)
	{
		x = i;
		cout << "调用基类构造函数" << endl;
	}
	void show()
	{
		cout << "x= " << x << endl;
	}
};
class Derived :public Base
{
private:
	Base d;
public:
	Derived(int i) :Base(i), d(i)//调用两次基类构造函数
	{
		cout << "调用派生类的构造函数" << endl;
	}
};
int main()
{
	Derived obj(100);
	obj.show();

	system("pause");
	return 0;
}