#include<iostream>
using namespace std;

int Sumdigits(int n){

    if(n==0){
        return 0;
    }else{
        return (n%10) + Sumdigits(n/10);
    }
}

int main(){

    int n;
    cin >> n;

    cout << Sumdigits(n) << endl;

    return 0;
}
