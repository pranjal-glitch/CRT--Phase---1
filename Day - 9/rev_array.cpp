#include<iostream>
using namespace std;

class ReverseArray{
    public:
    int arr[5];

    void reverse(){
        cout << "Reversed array: ";
        for(int i = 4; i >= 0; i--){
            cout << arr[i] << " ";
        }
    }

    void input(){
        cout << "Enter the elements: ";
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }
    }
};

int main() {
    ReverseArray r;
    r.input();
    r.reverse();

    return 0;
}
