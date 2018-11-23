#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include "animal.h"

using namespace std;
using namespace ani;

int main(int argc, char **argv)
{
	cout << "Digite um valor" << endl;
	string val;
	cin >> val;

	animal a,b;
	a.setValue(3,"m");
	a.pee();
	b.poo();

	system("PAUSE");
	return 0;
}

