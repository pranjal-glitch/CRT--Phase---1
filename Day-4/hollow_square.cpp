/*
  Description

Prints a hollow square pattern where only the border has * and inside is empty.*/
#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    // Loop through rows
    for(int i = 1; i <= n; i++){

        // Loop through columns
        for(int j = 1; j <= n; j++){

            // Print '*' only on borders
            if(i == 1 || i == n || j == 1 || j == n)
                cout << " *";
            else 
                cout << "  ";
        } 

        cout << endl;
    }
    
    return 0;
}
