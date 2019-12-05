#include "List.h"
#include <iostream>
#include <string>
int main()
{
	List l;
	l.push_back("1");
	l.push_back("2");
	l.push_back("3");
	l.push_back("4");
	l.print_all();
	system("pause");
	return 0;
}