#include<iostream>
using namespace std;

class Atm{
private:
    int bal;

public:
    void setBalance(int b){
        this->bal = b;
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

    int getBalance(){
        return bal;
    }
};

int main(){
    Atm atm;

    atm.setBalance(5000);

    atm.withdraw(1000);

    cout << "Current Balance: " << atm.getBalance();

    return 0;
}
