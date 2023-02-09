#include <iostream>

using namespace std;

class Class {
public:
	static int Counter;

	Class() 
	{ 
        // Incremento del Counter en cada creación de instancia
		++Counter; 
	};

	~Class() 
	{ 
        // Decremento del Counter en cada destrucción de instancia
		--Counter; 
		if(Counter == 0) 
			cout << "Bye, bye!" << endl; 
	};

	void HowMany() 
	{ 
		cout << Counter << " instances" << endl; 
	}
};

// inicializacion del Counter
int Class::Counter = 0;

int main() 
{
	Class a;
	Class b;

	cout << Class::Counter << " instances so far" << endl;
	
	Class c;
	Class d;

	d.HowMany();
}