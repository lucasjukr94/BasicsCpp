using namespace std;

namespace ani{
	class animal{
		int id;
		int age;
		string name;
	public:
		animal();
		void setValue(int, string);
		void pee();
		void poo();

		string getName(){
			return name;
		};

		int getAge(){
			return age;
		};

		int setId(int i){
			id = i;
		}

		int getId(){
			return id;
		};
	};

	animal::animal(){
		age = 0;
		name = "zeca";
	}

	void animal::setValue(int a, string n){
		age = a;
		name = n;
	}

	void animal::pee(){
		cout << name + " is peeing" << endl;
	}

	void animal::poo(){
		cout << name + " is pooping" << endl;
	}
}