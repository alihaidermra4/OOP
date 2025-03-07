#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
		
	public: 
	Rectangle(){
		length = 0;
		width = 0;	
	}
	
	Rectangle(double l){
		length = l;
		width =l;
	}
	
	Rectangle(double l, double w){
		length = l;
		width = w;
	}
	
	void displayarea(){
		cout<<"Area of the rectangle is :"<<length * width<<endl;
	}
	
	~Rectangle(){
		cout<<"Destructor called for : length ="<<length<<" and width = "<<width<<endl;
	}
};

void constructordestructor(){
	cout<<"In other function\n";
	Rectangle r1;
	Rectangle r2(4);
	Rectangle r3(4,3);
	
	Rectangle* r4;
	
	r4 = new Rectangle(4,4);
	
	r1.displayarea();
	r3.displayarea();
	
	r4->displayarea();
	
	cout<<"returning to main function\n";
}
int main(){
	cout<<"In main Function"<<endl;
	constructordestructor();
	cout<<"Terminating main function\n";
}
