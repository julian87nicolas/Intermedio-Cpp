#include <iostream>

using namespace std;

class Class {
public:
    Class() 
    { 
        this -> value = -1; 
    }
    Class(int val) 
    { 
        this -> value = val; 
    }
    void set_val(int value) 
    { 
        this -> value = value; 
    }
    int get_val() 
    { 
        return value; 
    }
private:
    int value;
};

class Class1 {
public:

    Class1(int val) 
	{ 
		this -> value = val; 
	}

	Class1(Class1 &source)
	{ 
		value = source.getValue(); 
	}
        int getValue(){
        return this -> value;
    }
private:
	int value;
};

class Class2 {
public:
	Class2(int val) 
	{ 
		this -> value = val; 
	}
	int value;
};

int main(){
    Class object1, object2(100);
    cout << object1.get_val() << endl;
    cout << object2.get_val() << endl;

    Class1 object11(100), object12(object11), object13(object12);
	Class2 object21(200), object22 = object21;

	cout << object12.getValue() << endl;
	cout << object13.getValue() << endl;
	cout << object22.value << endl;
}
