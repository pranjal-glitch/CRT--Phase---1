#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    // Default Constructor
    Student() {
        rollNo = 101;
        name = "Pranjal";
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;   // Default constructor automatically called

    s.display();

    return 0;
}
