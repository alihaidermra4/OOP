#include <iostream>
using namespace std;
class Myclass
{
public:
Myclass()
{
cout<<"Constructor called\n";
}
~Myclass()
{
cout<<"Destructor called\n";
}
};

void constructordestructor()
{
cout<<"Two objects of Myclass will be created\n";
Myclass obj1,obj2;
cout<<"\nThe function is terminating and returning the control to the main function\n";
}

int main()
{
cout<<"I am in the main function\n";
constructordestructor();
cout<<"\nThe control is back in the main function";
return 0;
}

