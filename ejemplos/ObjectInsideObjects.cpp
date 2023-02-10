#include <iostream>

using namespace std;

class Element {
    int value;
public:
    Element(int value)
    { 
        this -> value = value;
        cout << "Element(" << value << ") constructed!" << endl; 
    }
    int get()
    { 
        return value; 
    }
    void put(int val)
    { 
        value = val; 
    }
};

class Collection {
    Element el1, el2;
public: 
    Collection() : el1(2), el2(1) 
    { 
        cout << "Collection constructed!" << endl; 
    }
    int get(int elno) 
    { 
        return elno == 1 ? el1.get() : el2.get(); 
    }
    void put(int elno, int val)
    { 
        if(elno == 1) 
            el1.put(val); 
        else 
            el2.put(val); 
    }
};

int main() {
    Collection coll;
}