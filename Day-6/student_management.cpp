#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    string email;
    string mobileNo;
    string batch;
    string classNo;
    
    Student() {
        name = "Not Assigned";
        rollNo = 0;
        email = "N/A";
        mobileNo = "N/A";
        batch = "N/A";
        classNo = "N/A";
    }
    Student(string n, int r, string e, string m, string b, string c) {
        name = n;
        rollNo = r;
        email = e;
        mobileNo = m;
        batch = b;
        classNo = c;
    }
    void display() {
        cout << name << endl;
        cout << rollNo << endl;
        cout << email << endl;
        cout << mobileNo << endl;
        cout << batch << endl;
        cout << classNo << endl;
    }
};
int main() {

    Student s1;

    Student s2(
        "Pranjal Srivastava",
        101,
        "pranjal@gmail.com",
        "8429442447",
        "CSE",
        "14E"
    );
   

    s2.display();

    return 0;
}
