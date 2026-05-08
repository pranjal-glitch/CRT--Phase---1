#include <iostream>
using namespace std;

// Parent Class
class Player {
public:
    string name;
    int age;

    Player(string n, int a) {
        name = n;
        age = a;
    }

    void displayPlayer() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Child Class
class Cricketer : public Player {
public:
    int runs;

    Cricketer(string n, int a, int r)
        : Player(n, a) {
        runs = r;
    }

    void displayCricketer() {
        displayPlayer();
        cout << "Runs : " << runs << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", 36, 14000);

    c1.displayCricketer();

    return 0;
}
