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
		cout << "���û��๹�캯��" << endl;
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
	Derived(int i) :Base(i), d(i)//�������λ��๹�캯��
	{
		cout << "����������Ĺ��캯��" << endl;
	}
};
int main()
{
	Derived obj(100);
	obj.show();

	system("pause");
	return 0;
}