#include<iostream>
using namespace std;

class Area{
private:
    int length;
    int breadth;

public:
    void setDimensions(int l, int b){
        length = l;
        breadth = b;
    }

    friend void showArea(Area &a);
};
void showArea(Area &a){
    cout << "Area: " << a.length * a.breadth << endl;
}
int main(){
    Area rect;

    rect.setDimensions(5, 3);

    showArea(rect);

    return 0;
}
