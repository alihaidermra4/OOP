#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor: Length = " << length << ", Width = " << width << endl;
    }

    Rectangle(int l) {
        length = l;
        width = l;  
        cout << "Constructor with 1 parameter: Length = " << length << ", Width = " << width << endl;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Constructor with 2 parameters: Length = " << length << ", Width = " << width << endl;
    }

    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
    ~Rectangle() {
        cout << "Destructor called: Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    Rectangle r1;       
    Rectangle r2(5);    
    Rectangle r3(4, 6); 
	r2.displayArea();
	r3.displayArea();
}

