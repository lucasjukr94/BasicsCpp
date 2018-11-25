#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include "animal.h"

using namespace std;
using namespace ani;

namespace vegetal {
	class vegeta {
		string tipo;
		double altura;
	public:
		vegeta();
		vegeta(string);
		void crescer();
	};

	vegeta::vegeta() {
		altura = 0;
	}

	vegeta::vegeta(string tipo) {
		altura = 0;
		this->tipo = tipo;
	}

	void vegeta::crescer() {
		cout << tipo << endl;
		altura += 1;
		cout << "cresceu + " + to_string(altura) << endl;
	}
}

using namespace vegetal;

int main(int argc, char **argv)
{
	cout << "Digite um valor" << endl;
	string val;
	cin >> val;

	animal a,b;
	vegeta kakaroto("cenoura");
	kakaroto.crescer();

	a.setValue(3,"m");
	a.pee();
	b.poo();

	system("PAUSE");
	return 0;
}

