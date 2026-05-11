#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "world";

    cout << str1 << " " << str2 << endl;

    /// methods of string

    // 1 length of string
    int n = str1.length();

    cout << "Length is " << n << endl;

    // 2 append
    cout << "After appending string "
         << str1.append("Studrnbtsd") << endl;

    // 3 empty
    cout << "is string empty "
         << str2.empty() << endl;

    // 4 concatenation
    cout << "After concatenation of str "
         << str1 + " bacho" << endl;

    cout << "After concatenation of string 1 is "
         << str1 << endl;

    // 5 push_back
    str2.push_back('U');

    cout << "After pushing back character U to string 2 is "
         << str2 << endl;

    // 6 pop_back
    str2.pop_back();

    cout << "after pop_back() "
         << str2 << endl;

    // 7 find
    int index = str1.find("ello");

    cout << "Index of substring 'ello' in string 1 is "
         << index << endl;

    // 8 at
    char h = str1.at(1);

    cout << "Character at index 1 in string 1 is "
         << h << endl;

    // 9 swap
    str1.swap(str2);

    cout << "After swapping string 1 and string 2, string 1 is "
         << str1 << endl;

    cout << "str1 = " << str1 << endl;

    cout << "str2 = " << str2 << endl;

    // 10 substr
    string substr = str2.substr(5, 6);

    cout << "Substring of string 2 from index 5 with length 6 is "
         << substr << endl;

    // 11 getline
    string str3;

    getline(cin, str3);

    cout << "you entered "
         << str3 << endl;

    return 0;
}
