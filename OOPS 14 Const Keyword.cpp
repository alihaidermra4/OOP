#include <iostream>
using namespace std;

class Test {
private:
    const int constantVar;

public:
    Test(int val) : constantVar(val) {}

    void showValue() const {
        cout << "Constant Variable: " << constantVar << endl;
    }
};

int main() {
    const Test obj(10);

    obj.showValue();

    return 0;
}

