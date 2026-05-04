/*Description

Prints a solid rectangle pattern of * with given rows and columns.
  */

💻 Code
#include<iostream>
using namespace std;

int main(){
    int rows, cols; 
    cin >> rows >> cols;

    // Loop through rows
    for(int i = 0; i < rows; i++){

        // Loop through columns
        for(int j = 0; j < cols ; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
