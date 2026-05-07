#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
