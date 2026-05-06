#include<iostream>
using namespace std;

int main(){
    int a;

    cin >> a;
    
    int *p;
    
    p = &a;
     
    cout << "Value of a: " << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}
