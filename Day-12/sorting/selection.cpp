#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n){
    for (int i = 0; i < n; i++){
        int minIndex = i;

        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
            
        }
        swap (arr[minIndex], arr[i]);
    }
}
int main() {
    vector<int> arr = {29, 72, 98, 13, 87, 66, 52, 51, 36};
    int n = arr.size();

    selectionSort(arr, n);
    cout << "Sorted array: ";
    for(int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}

