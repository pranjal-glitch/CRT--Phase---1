#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    // Parameterized Constructor
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
    }

    // Copy Constructor
    Student(Student &s) {
        this->rollNo = s.rollNo;
        this->name = s.name;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(103, "Pranjal");

    // Copying s1 into s2
    Student s2(s1);

    s2.display();

    return 0;
}
