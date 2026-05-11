#include <iostream>
using namespace std;
class Sum{
    public:
    int arr[5];
    int sum = 0;

    void input(){
        cout << "Enter elements: ";
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }
    }

    void calcSum(){
        for(int i = 0; i < 5; i++){
            sum += arr[i];
        }
        cout << sum;
    }
};

int main() {
    Sum s;
    s.input();
    s.calcSum();
}

 
