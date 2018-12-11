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
	cout << "********0.退    出********" << endl;
	cout << "********1.录入信息********" << endl;
	cout << "********2.浏览信息********" << endl;
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
		cout << "你要输入的人员类型（1-学生 2-研究生 3-在职研究生 4-教师）";
		cin >> type;
		if (type == 1)
		{
			if (numofst == N)
				cout << "人数已满，无法继续录入！" << endl;
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
				cout << "人数已满，已无法录入" << endl;
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
				cout << "人数已满，已无法录入" << endl;
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
				cout << "人数已满，已无法录入" << endl;
			else
			{
				for (i = 0; strcmp(te[i].getname(), "00") != 0; i++);
				te[i].input();
				numofte++;
			}
		}
		else
		{
			cout << "输入有误" << endl;
		}
		cout << "继续输入？（y/n）" << endl;
		cin >> ch;
	} while (ch == 'y');
}
void interface::output()
{
	int type;
	int i;
	cout << "你要查看的人员类型（1-学生 2-研究生 3-在职研究生 4-教师）" << endl;
	cin >> type;

	if (type == 1)
	{
		if (numofst == 0)
		{
			cout << "没有学生信息" << endl;
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
			cout << "没有研究生信息" << endl;
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
			cout << "没有在职研究生信息" << endl;
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
			cout << "没有教师信息" << endl;
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
		cout << "选择有误" << endl;
	}

}