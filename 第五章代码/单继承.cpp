#include<iostream>

using namespace std;

class Base
{
private:
	int b1;
protected:
	int b2;
public:
	void set(int m,int n)
	{
		b1 = m;
		b2 = n;
	}
	void show()
	{
		cout << "b1= " << b1 << endl;
		cout << "b2= " << b2 << endl;
	}
};
class Derived :public Base
{
private:
	int d;
public:
	void setall(int m, int n, int l)
	{
		set(m,n);
		d = 1;
	}
	void showtall()
	{
		//cout << "b1= " << b1 << endl;//Base���˽�г�Ա���ܱ�����
		cout << "b2= " << b2 << endl;
		show();
		cout << "d= " << d << endl;
	}
};
int main()
{
	Derived obj;
	obj.setall(10, 20, 30);
	obj.show();
	obj.showtall();//�����b2,�ڵ���show()

	system("pause");

	return 0;
}