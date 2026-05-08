#include<iostream>
using namespace std;

class Atm{
    private:
    int bal;

     public: 
     Atm(){
        bal = 10000;
     }
     void withdraw(int amount){
        if(amount > bal){
            cout << "Insufficient balance" << endl;
        }
        else{
            bal -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining balance: " << bal << endl;
        }
    }
     };
int main(){
    Atm myAtm;
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    myAtm.withdraw(amount);
    return 0;

}
