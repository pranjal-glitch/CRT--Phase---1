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

// Child Class 1
class Batter : public Player {
public:
    int runs;

    Batter(string n, int a, int r)
        : Player(n, a) {
        runs = r;
    }

    void displayBatter() {
        displayPlayer();
        cout << "Runs : " << runs << endl;
    }
};

// Child Class 2
class Bowler : public Player {
public:
    int wickets;

    Bowler(string n, int a, int w)
        : Player(n, a) {
        wickets = w;
    }

    void displayBowler() {
        displayPlayer();
        cout << "Wickets : " << wickets << endl;
    }
};

int main() {

    Batter b1("Virat Kohli", 36, 14000);
    Bowler bw1("Jasprit Bumrah", 31, 350);

    cout << "Batter Details" << endl;
    b1.displayBatter();

    cout << endl;

    cout << "Bowler Details" << endl;
    bw1.displayBowler();

    return 0;
}
