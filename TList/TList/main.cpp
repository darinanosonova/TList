#include "TList.h"
#include <iostream>

using namespace std;

int main()
{
	TList l;
	l.push(1);
	l.push(9);
	l.push(8);
	l.print();
	l.add_new_elem_after_max(4);
	l.print();

}