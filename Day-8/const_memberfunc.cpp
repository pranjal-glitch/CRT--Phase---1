#include<iostream>
using namespace std;

class MyClass{
    int value;
public:
    MyClass(int v) : value(v) {}
    void showValue() const{
        cout << "Value: " << value << endl;
    }
};

int main(){
    const MyClass obj(10);
    obj.showValue();
    return 0;
}
