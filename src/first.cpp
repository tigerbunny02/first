//============================================================================
// Name        : first.cpp
// Author      : pirozhok
// Version     :
// Copyright   : AAAAAAAAAAAAAAA!!!!!!!!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char simb;
	int qty, line;

	cout << "Enter char" << endl;
	cin >> simb;

	cout<< "Enter chars quantity" << endl;
	cin >> qty;

	cout << "Enter output order" << endl <<
	"1. Horizontal" << endl <<
	"2. vertical" << endl;
	cin >> line;

	if (line < 1 || line > 2)
	{
		exit(1);
	}


	while (qty > 0)
	{
		cout << simb;

		if (line == 2)
		{
			cout << endl;
		}

		qty--;
	}


	return 0;
}
