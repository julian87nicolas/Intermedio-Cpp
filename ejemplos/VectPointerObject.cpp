#include <iostream>
#include <vector>

using namespace std;

class Array {
    int *values;
    int  size;
public:
    Array(int size) { 
        this -> size = size;
        values = new int[size];
        cout << "Array of " << size << " ints constructed." << endl; 
    }
    ~Array()
    { 
        delete [] values; 
        cout << "Array of " << size << " ints destructed." << endl; 
    }
    int get(int index)
    { 
        return values[index];
    }
    void put(int index, int value)
    { 
        values[index] = value; 
    }
};  

int main()
{
    vector<Array *> ptrvect = { new Array(2), new Array(2) };

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            ptrvect[i] -> put(j, j + 10 + i);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            cout << "#" << i + 1 << ":" << ptrvect[i] -> get(j) << "; ";
        cout << endl;
    }
    delete ptrvect[0];
    delete ptrvect[1];
}