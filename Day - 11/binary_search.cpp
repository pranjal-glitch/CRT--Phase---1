#include <iostream>
#include <algorithm> // For sorting
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
     int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid; // Found key
        }

        if (key > arr[mid]) {
            start = mid + 1; // Search right half
        } else {
            end = mid - 1; // Search left half
        }

        mid = start + (end - start) / 2;
    }
    return -1; // Key not found
}

int main() {
    int even[6] = {13, 8, 6, 4, 3, 2};
    int odd[5] = {16, 11, 9, 8, 5};

    // Sort the arrays in ascending order before binary search
    sort(even, even + 6);
    sort(odd, odd + 5);

    // Perform binary search
    int index = binarySearch(even, 6, 13);

    cout << "Index of 13 is " << index << endl;
    
    int index2 = binarySearch(odd, 5, 11);

    cout << "Index of 11 is " << index2 << endl;

    return 0;
}
