#include <iostream>

using namespace std;

class SuperA {
protected:
	int storage;
public:
	void put(int val)
	{ 
		storage = val; 
	}
	int get() 
	{ 
		return storage; 
	}
};

class SuperB {
protected:
	int safe;
public:
	void insert(int val) 
	{ 
		safe = val; 
	}
	int takeout()
	{ 
		return safe; 
	}
};

class Sub : public SuperA, public SuperB {
public:
	void print()
	{ 
		cout << "storage = " << storage << endl; 
		cout << "safe    = " << safe << endl;
	}
};

int main()
{
	Sub object;

	object.put(1);
	object.insert(2);
	object.put(object.get() + object.takeout());
	object.insert(object.get() + object.takeout());
	object.print();
}