#include<iostream>
using namespace std;
class Gradebook
    {
    public:
    void displaymessage (string coursename)
    {
    cout<<"Welcome to the Gradebook of "<<coursename<<" !\n";
    }
    };
int main()
{
    Gradebook obj;
    string mycoursename;
    cout<<"Enter the name of your course\n";
    getline(cin,mycoursename);
    obj.displaymessage(mycoursename);
    return 0;
}