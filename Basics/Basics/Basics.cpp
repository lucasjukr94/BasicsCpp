#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

namespace animal{
	class animal{
		int id;
		int age;
		string name;
	public:
		animal(){
			age = 0;
			name = "";
		};
		animal(int a, string n){
			age = a;
			name = n;
		};
		void pee(){
			cout << "Peeing" << endl;
		};
	};
}

using namespace animal;

int main(int argc, char **argv)
{
	cout << "Digite um valor" << endl;

	int val;
	cin >> val;
	system("PAUSE");
	return 0;
}

