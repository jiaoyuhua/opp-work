#ifndef _INTERFACE
#define _INTERFACE
#include "5-4-people.h"

const int N = 3;
class interface
{
protected:
	Student st[N];
	int numofst;
	Graduate gr[N];
	int numofgr;
	postgraduateonjob po[N];
	int numofpo;
	Teacher te[N];
	int numofte;
public:
	interface();
	void display();
	void run();
	void input();
	void output();

};
#endif
