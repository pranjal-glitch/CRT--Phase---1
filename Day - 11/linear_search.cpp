#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        } 
    }
    return false;
}

int main() {
    int arr[8] = {5, 7, 8, -9, 10, 2, 1,5};

    cout << "Enter the element to search" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 8, key);

    if (found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl;  // Fixed syntax error
    }

    return 0;
}
