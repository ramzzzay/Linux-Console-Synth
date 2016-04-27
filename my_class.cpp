//============================================================================
// Name        : tests_with_class.cpp
// Author      : ramzay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "my.h"
using namespace std;

int main() {
	my c;
	int a;
	cout << "1) Играть все октавы" << endl
			<< "2) Играть на синитзаторе" << endl;
	cin >> a;
	switch(a) {
	case 1:
	c.choose();
	c.music();
	break;
	case 2:
		c.play();
		break;
	default:
		return 0;
		break;
	}
	return 0;
}
