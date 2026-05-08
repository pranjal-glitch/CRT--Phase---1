#include <iostream>
using namespace std;

// Parent Class 1
class Player {
public:
    string name;

    Player(string n) {
        name = n;
    }
};

// Parent Class 2
class Team {
public:
    string teamName;

    Team(string t) {
        teamName = t;
    }
};

// Child Class inheriting from both classes
class Cricketer : public Player, public Team {
public:
    int runs;

    Cricketer(string n, string t, int r)
        : Player(n), Team(t) {
        runs = r;
    }

    void display() {
        cout << "Name      : " << name << endl;
        cout << "Team Name : " << teamName << endl;
        cout << "Runs      : " << runs << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", "India", 14000);

    c1.display();

    return 0;
}
