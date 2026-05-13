#include<iostream>
using namespace std;

void insertionsort(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Shift elements greater than temp to one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place temp at the correct position
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {12, 1, 31, 15, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // get the size of array

    insertionsort(n, arr);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
