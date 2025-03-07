#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Default Constructor
    Rectangle(){
    	length = 0;
    	width = 0;
	}
	
    Rectangle(double l = 1, double w = 1) {
        length = l;
        width = w;
    }

	// When no copy constructor is found, compiler supplies its own copy constructor
    // Copy Constructor
    //Rectangle(Rectangle &r) {
      //  length = r.length;
      //  width = r.width;
    //	cout << "Copy Constructor Called\n";
    //}
	
	void updateValues(double l, double w){
		length = length+l;
		width = width+w;
	}
	
    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
    
    ~Rectangle(){
    	cout<<"\nDestructor called";
	}
};

int main() {
    Rectangle r1(4, 5);  // Normal constructor
    
    cout<<"Displaying area of r1"<<endl;
	r1.displayArea();
	
    Rectangle r2 = r1;   // Copy constructor is called
    cout<<"Displaying area of r2"<<endl;
	r2.displayArea();
	cout<<"Displaying area of r1 after copying to r2"<<endl;
    r1.displayArea();
	
	r2.updateValues(4,5);
	cout<<"Displaying area of r2 after updation"<<endl;
	r2.displayArea();
	
	cout<<"Displaying area of r1"<<endl;
	r1.displayArea();
		
    return 0;
}

