#define _CRT_SECURE_NO_WARNINGS
#include "5-4-interface.h"
#include <cstring>
#include <iostream>

using namespace std;

interface::interface()
{
	numofgr = 0;
	numofst = 0;
	numofte = 0;
	numofpo = 0;
};
void interface::display()
{
	cout << "********0.��    ��********" << endl;
	cout << "********1.¼����Ϣ********" << endl;
	cout << "********2.�����Ϣ********" << endl;
}
void interface::run()
{
	int choice;
	do {
		display();
		cout << "Please input your choice:";
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;
		case 1:
			input();
			break;
		case 2:
			output();
			break;
		}
	} while (choice);
}
void interface::input()
{
	int type;
	int i;
	char ch;
	do
	{
		cout << "��Ҫ�������Ա���ͣ�1-ѧ�� 2-�о��� 3-��ְ�о��� 4-��ʦ��";
		cin >> type;
		if (type == 1)
		{
			if (numofst == N)
				cout << "�����������޷�����¼�룡" << endl;
			else
			{
				for (i = 0; strcmp(st[i].getname(), "00") != 0; i++);
				st[i].input();
				numofst++;
			}
		}
		else if (type == 2)
		{
			if (numofgr == N)
				cout << "�������������޷�¼��" << endl;
			else
			{
				for (i = 0; strcmp(gr[i].getname(), "00") != 0; i++);
				gr[i].input();
				numofgr++;
			}
		}
		else if (type == 3)
		{
			if (numofpo == N)
				cout << "�������������޷�¼��" << endl;
			else
			{
				for (i = 0; strcmp(po[i].getname(), "00") != 0; i++);
				po[i].input();
				numofpo++;
			}
		}
		else if (type == 4)
		{
			if (numofte == N)
				cout << "�������������޷�¼��" << endl;
			else
			{
				for (i = 0; strcmp(te[i].getname(), "00") != 0; i++);
				te[i].input();
				numofte++;
			}
		}
		else
		{
			cout << "��������" << endl;
		}
		cout << "�������룿��y/n��" << endl;
		cin >> ch;
	} while (ch == 'y');
}
void interface::output()
{
	int type;
	int i;
	cout << "��Ҫ�鿴����Ա���ͣ�1-ѧ�� 2-�о��� 3-��ְ�о��� 4-��ʦ��" << endl;
	cin >> type;

	if (type == 1)
	{
		if (numofst == 0)
		{
			cout << "û��ѧ����Ϣ" << endl;
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (strcmp(st[i].getname(), "00") != 0)
					st[i].output();
			}
		}
	}
	else if (type == 2)
	{
		if (numofgr == 0)
		{
			cout << "û���о�����Ϣ" << endl;
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (strcmp(gr[i].getname(), "00") != 0)
					gr[i].output();
			}
		}
	}
	else if (type == 3)
	{
		if (numofpo == 0)
		{
			cout << "û����ְ�о�����Ϣ" << endl;
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (strcmp(po[i].getname(), "00") != 0)
					po[i].output();
			}
		}
	}
	else if (type == 4)
	{
		if (numofte == 0)
		{
			cout << "û�н�ʦ��Ϣ" << endl;
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (strcmp(te[i].getname(), "00") != 0)
					te[i].output();
			}
		}
	}
	else 
	{
		cout << "ѡ������" << endl;
	}

}