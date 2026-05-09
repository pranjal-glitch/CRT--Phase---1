#include<iostream>
using namespace std;

class Student{
    public:
    static int reg_no;

    Student(){
        reg_no++;
    }
    void showRegNo(){
        cout << "Registration Number: " << reg_no << endl;
    }
};
int Student::reg_no = 100;

int main(){
    Student s1;
    Student s2;
    Student s3;
    Student::reg_no = 200;
    Student

    s1.showRegNo();
    s2.showRegNo();
    s3.showRegNo();
}
