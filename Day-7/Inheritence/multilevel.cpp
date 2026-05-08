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

// Grandchild Class
class Batter : public Cricketer {
public:
    int trophies;

    Batter(string n, int a, int r, int t)
        : Cricketer(n, a, r) {
        trophies = t;
    }

    void displayBatter() {
        displayCricketer();
        cout << "Trophies : " << trophies << endl;
    }
};

int main() {

    Batter c1("Sachin Tendulkar", 40, 15000, 8);

    c1.displayBatter();

    return 0;
}
