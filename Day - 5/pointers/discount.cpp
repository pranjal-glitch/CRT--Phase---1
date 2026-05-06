#include <iostream>
using namespace std;

// Function using reference
void applyDiscount(float &bill) {
    bill = bill - (0.10 * bill);  // 10% discount
}

int main() {
    float bill;

    cout << "Enter original bill amount: ";
    cin >> bill;

    applyDiscount(bill);  // passing by reference

    cout << "Final bill after 10% discount: " << bill << endl;

    return 0;
}
