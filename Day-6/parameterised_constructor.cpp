#include <iostream>
using namespace std;

class Solution {
public:
    string name;
    string roll_no;

    // Parameterized Constructor
    Solution(string name, string roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }

    void display() {
        cout << name << endl;
        cout << roll_no << endl;
    }
};

int main() {
    Solution s("Pranjal", "12345");
    s.display();

    return 0;
}
